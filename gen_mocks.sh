PICO_MOCK_ROOT=$(pwd)
CPPUMOCKGEN=$PICO_MOCK_ROOT/bin/CppUMockGen

INCLUDE_DIRS="-I /usr/lib/gcc/x86_64-pc-linux-gnu/14.1.1/include "
INCLUDE_DIRS+="-I $PICO_MOCK_ROOT/include "

# Mock Exclusions
# The following header files are excluded from the mock generation process.
# This is because they are either not required or they are causing compilation errors.
# The list of exclusions is not exhaustive and may need to be updated as required.
EXCLUSIONS=(
  "pico.h"
  "assert.h"
  "types.h"
  )

# Get a list of all header files in the $PICO_MOCK_ROOT/include directory and its subdirectories
# and generate mocks for each of them.
find $PICO_MOCK_ROOT/include -type f -name "*.h" | while read -r header; do
  # Check if the header file is in the exclusions list
  if [[ " ${EXCLUSIONS[@]} " =~ " ${header##*/} " ]]; then
    echo "Excluding: $header"
    continue
  fi

  echo "Generating mocks for: $header"
  $CPPUMOCKGEN $INCLUDE_DIRS --mock-output $PICO_MOCK_ROOT/mock --expect-output $PICO_MOCK_ROOT/expect --input "$header"
done
