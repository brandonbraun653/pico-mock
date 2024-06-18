PICO_MOCK_ROOT=$(pwd)

# Create the build directory
CPPUMOCKGEN_ROOT=$PICO_MOCK_ROOT/CppUMockGen
CPPUMOCKGEN_BUILD_DIR=$CPPUMOCKGEN_ROOT/build
mkdir -p $CPPUMOCKGEN_BUILD_DIR

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
