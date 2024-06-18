add_library(pico_mock_headers INTERFACE)
target_include_directories(pico_mock_headers INTERFACE
  ${CMAKE_CURRENT_SOURCE_DIR}/bin
  ${CMAKE_CURRENT_SOURCE_DIR}/expect
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

file(GLOB MOCK_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/mock/*.cpp")
file(GLOB EXPECT_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/expect/*.cpp")

add_library(pico_mock_lib STATIC
  ${EXPECT_SOURCES}
  ${MOCK_SOURCES}
)

target_link_libraries(pico_mock_lib PRIVATE pico_mock_headers CppUTest CppUTestExt)