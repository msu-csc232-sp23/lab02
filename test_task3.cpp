/**
 * CSC232 - Data Structures
 * Missouri State University
 *
 * @file    test_task2.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Test suite to validate task 2 of this assignment.
 * @version v2022.12.26
 * @date    Spring 2023
 */

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "csc232.h"

TEST_SUITE("Task 3"
           * doctest::description("A suite of tests for verifying task 3.")
           * doctest::skip( SKIP_TESTING_TASK_3 ) )
{
#if !SKIP_TESTING_TASK_3
    SCENARIO("Validating recursive cases of the Ackermann function")
    {
        GIVEN( "the recursive case of n = 0" )
        {
            WHEN( "I compute the Ackermann function for a number of values of m" )
            {
                THEN( "I expect the result to be computing correctly" )
                {
                    size_t m;
                    size_t n{ 0 };
                    size_t expected[ 5 ] = { 1, 2, 3, 5, 13};
                    size_t actual[ 5 ];
                    for (m = 0; m < 5; ++m )
                    {
                        actual[ m ] = Acker( m, n );
                        REQUIRE_EQ( expected[ m ], actual[ m ] );
                    }
                }
            }
        }
        GIVEN( "the recursive cse of m > 0 and n > 0")
        {
            size_t expected;
            size_t actual;
            WHEN( "I compute the Acker(1, 1)")
            {
                actual = Acker( 1, 1 );
                THEN( "I expect a value of 3")
                {
                    expected = 3;
                    REQUIRE_EQ( expected, actual );
                }
            }
            AND_WHEN( "I compute the value of Acker( 1, 2 )" )
            {
                actual = Acker( 1, 2 );
                THEN( "I expect a value of 4")
                {
                    expected = 4;
                    REQUIRE_EQ( expected, actual );
                }
            }
            AND_WHEN( "I compute a value of Acker( 2, 1 )")
            {
                actual = Acker( 2, 1 );
                THEN( "I expect a value of 5")
                {
                    expected = 5;
                    REQUIRE_EQ( expected, actual );
                }
            }
            AND_WHEN( "I compute a value of Acker( 2, 2 )")
            {
                actual = Acker( 2, 2 );
                THEN( "I expect a value of 7")
                {
                    expected = 7;
                    REQUIRE_EQ( expected, actual );
                }
            }
        }
    }
#endif
}
