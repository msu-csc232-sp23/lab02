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

TEST_SUITE("Task 3"
           * doctest::description("A suite of tests for verifying task 3.")
           * doctest::skip( SKIP_TESTING_TASK_3 ) )
{
    SCENARIO("Some scenario")
    {
        GIVEN( "some pre-conditions" )
        {
            WHEN( "I check something" )
            {
                THEN( "when I check " )
                {
                    CHECK( true );
                }
            }
        }
    }
}
