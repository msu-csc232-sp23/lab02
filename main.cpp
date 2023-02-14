/**
 * CSC232 - Data Structures
 * Missouri State University
 *
 * @file    main.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Entry-point of the main target.
 * @version v2022.12.26
 * @date    Spring 2023
 */

#include "csc232.h"

int main( )
{
#if !SKIP_TESTING_TASK_3
    size_t m;
    size_t n{ 0 };
    size_t expected;
    size_t actual;
    for (m = 0; m < 5; ++m )
    {
        actual = Acker( m, n );
        std::cout << "Acker( " << m << ", " << n << ") = " << actual << "\n";
    }

    std::cout << "Acker(1, 1) = " << Acker(1, 1) << "\n";
    std::cout << "Acker(1, 2) = " << Acker(1, 2) << "\n";
    std::cout << "Acker(2, 1) = " << Acker(2, 1) << "\n";
    std::cout << "Acker(2, 2) = " << Acker(2, 2) << "\n";
#endif
    return EXIT_SUCCESS;
}
