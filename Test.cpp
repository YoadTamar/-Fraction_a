#include <iostream>
#include "sources/Fraction.hpp"
#include "doctest.h"

using namespace std;

namespace ariel
{
    // Test arithmetic operators
    TEST_CASE("Fraction arithmetic operators tests")
    {

        // Test addition operator
        SUBCASE("Addition operator")
        {
            Fraction f1(1, 2);
            Fraction f2(1, 4);
            Fraction f3 = f1 + f2;
            CHECK(f3.getNumerator() == 3);
            CHECK(f3.getDenominator() == 4);
        }

        // Test subtraction operator
        SUBCASE("Subtraction operator")
        {
            Fraction f1(1, 2);
            Fraction f2(1, 4);
            Fraction f3 = f1 - f2;
            CHECK(f3.getNumerator() == 1);
            CHECK(f3.getDenominator() == 4);
        }

        // Test multiplication operator
        SUBCASE("Multiplication operator")
        {
            Fraction f1(1, 2);
            Fraction f2(3, 4);
            Fraction f3 = f1 * f2;
            CHECK(f3.getNumerator() == 3);
            CHECK(f3.getDenominator() == 8);
        }

        // Test division operator
        SUBCASE("Division operator")
        {
            Fraction f1(1, 2);
            Fraction f2(3, 4);
            Fraction f3 = f1 / f2;
            CHECK(f3.getNumerator() == 2);
            CHECK(f3.getDenominator() == 3);
        }
    }

    // Test comparison operators
    TEST_CASE("Fraction comparison operators tests")
    {

        // Test greater than operator
        SUBCASE("Greater than operator")
        {
            Fraction f1(1, 2);
            Fraction f2(1, 4);
            CHECK((f1 > f2) == true);
            CHECK((f2 > f1) == false);
            CHECK((f1 > f1) == false);
        }

        // Test greater than or equal to operator
        SUBCASE("Greater than or equal to operator")
        {
            Fraction f1(1, 2);
            Fraction f2(1, 4);
            CHECK((f1 >= f2) == true);
            CHECK((f2 >= f1) == false);
            CHECK((f1 >= f1) == true);
        }

        // Test less than operator
        SUBCASE("Less than operator")
        {
            Fraction f1(1, 2);
            Fraction f2(1, 4);
            CHECK((f1 < f2) == false);
            CHECK((f2 < f1) == true);
            CHECK((f1 < f1) == false);
        }

        // Test less than or equal to operator
        SUBCASE("Less than or equal to operator")
        {
            Fraction f1(1, 2);
            Fraction f2(1, 4);
            CHECK((f1 <= f2) == false);
            CHECK((f2 <= f1) == true);
            CHECK((f1 <= f1) == true);
        }

        // Test equality operator
        SUBCASE("Equality operator")
        {
            Fraction f1(1, 2);
            Fraction f2(3, 4);
            Fraction f3(2, 4);
            CHECK((f1 == f1) == true);
            CHECK((f1 == f2) == false);
            CHECK((f1 == f3) == true);
        }

        // Test pre-increment operator
        SUBCASE("Pre-increment operator")
        {
            Fraction f1(1, 2);
            Fraction f2 = ++f1;
            CHECK(f1.getNumerator() == 3);
            CHECK(f1.getDenominator() == 2);
            CHECK(f2.getNumerator() == 3);
            CHECK(f2.getDenominator() == 2);
        }

        // Test post-increment operator
        SUBCASE("Post-increment operator")
        {
            Fraction f1(1, 2);
            Fraction f2 = f1++;
            CHECK(f1.getNumerator() == 3);
            CHECK(f1.getDenominator() == 2);
            CHECK(f2.getNumerator() == 1);
            CHECK(f2.getDenominator() == 2);
        }

        // Test pre-decrement operator
        SUBCASE("Pre-decrement operator")
        {
            Fraction f1(3, 2);
            Fraction f2 = --f1;
            CHECK(f1.getNumerator() == 1);
            CHECK(f1.getDenominator() == 2);
            CHECK(f2.getNumerator() == 1);
            CHECK(f2.getDenominator() == 2);
        }

        // Test post-decrement operator
        SUBCASE("Post-decrement operator")
        {
            Fraction f1(3, 2);
            Fraction f2 = f1--;
            CHECK(f1.getNumerator() == 1);
            CHECK(f1.getDenominator() == 2);
            CHECK(f2.getNumerator() == 3);
            CHECK(f2.getDenominator() == 2);
        }

        // Test negative function
        SUBCASE("Negative function")
        {
            Fraction f1(1, 2);
            Fraction f2 = -1 * f1;
            CHECK(f2.getNumerator() == -1);
            CHECK(f2.getDenominator() == 2);
        }
    }
}