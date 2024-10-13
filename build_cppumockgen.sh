PICO_MOCK_ROOT=$(pwd)

# Re-create the build directory
CPPUMOCKGEN_ROOT=$(readlink -f "$(pwd)/CppUMockGen")
CPPUMOCKGEN_BUILD_DIR=$CPPUMOCKGEN_ROOT/build

if [ -d "$CPPUMOCKGEN_BUILD_DIR" ]; then
    echo "Removing existing build directory: $CPPUMOCKGEN_BUILD_DIR"
    rm -rf "$CPPUMOCKGEN_BUILD_DIR"
fi

mkdir -p $CPPUMOCKGEN_BUILD_DIR

# Set the LibClang base directory and library path
LATEST_CLANG_VERSION=$(ls -1 /usr/lib | grep "^llvm" | sort -V | tail -n 1)
if [ -z "$LATEST_CLANG_VERSION" ]; then
    echo "Error: Could not find the latest LLVM version installed."
    exit 1
fi
export LIBCLANG_HOME=/usr/lib/$LATEST_CLANG_VERSION
echo "Using LIBCLANG_HOME: $LIBCLANG_HOME"

# Build the CppUMockGen
cd $CPPUMOCKGEN_BUILD_DIR
cmake ..
make -j8

# Copy the artifacts
mkdir -p $PICO_MOCK_ROOT/bin
OUTPUT_FILE=$PICO_MOCK_ROOT/bin/CppUMockGen
echo "Copying to $OUTPUT_FILE"
cp $CPPUMOCKGEN_BUILD_DIR/app/CppUMockGen-0.6.0 $OUTPUT_FILE

echo "Copying CppUMockGen.hpp to $PICO_MOCK_ROOT/bin/include"
cp $CPPUMOCKGEN_ROOT/app/include/CppUMockGen.hpp $PICO_MOCK_ROOT/bin/CppUMockGen.hpp
