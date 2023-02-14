/**
 * CSC232 - Data Structures
 * Missouri State University
 *
 * @file    test_task1.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Test suite to validate task 1 of this assignment.
 * @version v2022.12.26
 * @date    Spring 2023
 */

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "csc232.h"
#include "doctest.h"

TEST_SUITE("Task 2"
           * doctest::description("A suite of tests for verifying task 2.")
           * doctest::skip( SKIP_TESTING_TASK_2 ) )
{
#if !SKIP_TESTING_TASK_2
    SCENARIO("Validating the base case of the Ackermann function")
    {
        GIVEN( "the base case of m = 0" )
        {
            WHEN( "I compute the Ackermann function for a number of values of n" )
            {
                THEN( "I expect the result to be one greater than the value of n" )
                {
                    size_t m{ 0 };
                    size_t expected;
                    size_t actual;
                    for (size_t n{ 0 }; n < 10; ++n )
                    {
                        expected = n + 1;
                        actual = Acker( m, n );
                    }
                    REQUIRE_EQ( expected, actual );
                }
            }
        }
    }
#endif
}
