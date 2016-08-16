find_package(GTest REQUIRED)

#MESSAGE(STATUS "Poject source: ${CMAKE_SOURCE_DIR}")

INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR})

ADD_EXECUTABLE(gtests CalculatorTests.cpp)
TARGET_LINK_LIBRARIES(gtests Calc gtest gtest_main pthread)

ADD_CUSTOM_TARGET(test gtests 
    --gtest_output=xml
    ${GTEST_FILTER}
    DEPENDS ${PROJECT_NAME}
    COMMENT "Executing unit tests..."
    VERBATIM SOURCES CalculatorTests.cpp)
