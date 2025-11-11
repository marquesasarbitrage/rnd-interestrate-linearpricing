add_executable(compoundrate ${CMAKE_CURRENT_SOURCE_DIR}/tests/compoundrate.cpp)
target_link_libraries(compoundrate PUBLIC rnd-ir-linearpricing)
