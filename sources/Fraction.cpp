#include "Fraction.hpp"

using namespace std;


namespace ariel
{

    

    Fraction::Fraction(int up, int bottom) {}

    Fraction::Fraction(float f) {}

    Fraction operator+(const Fraction &first, const Fraction &second)
    {
        return Fraction(2, 7);
    }

    Fraction operator-(const Fraction &first, const Fraction &second)
    {
        return Fraction(2, 7);
    }

    Fraction operator*(const Fraction &first, const Fraction &second)
    {
        return Fraction(2, 7);
    }

    Fraction operator/(const Fraction &first, const Fraction &second)
    {
        return Fraction(2, 7);
    }

    Fraction Fraction::operator++(int i)
    {
        return Fraction(2, 7);
    }

    Fraction Fraction::operator++()
    {
        return Fraction(2, 7);
    }

    Fraction Fraction::operator--(int num)
    {
        return Fraction(2, 7);
    }

    Fraction Fraction::operator--()
    {
        return Fraction(2, 7);
    }

    bool operator>(const Fraction &first, const Fraction &second)
    {
        return true;
    }

    bool operator>=(const Fraction &first, const Fraction &second)
    {
        return true;
    }

    bool operator<(const Fraction &first, const Fraction &second)
    {
        return true;
    }

    bool operator<=(const Fraction &first, const Fraction &second)
    {
        return true;
    }

    bool operator==(const Fraction &first, const Fraction &second)
    {
        return true;
    }

    bool operator!=(const Fraction &first, const Fraction &second)
    {
        return true;
    }

    ostream &operator<<(ostream &outputStream, const Fraction &fraction)
    {
        return outputStream;
    }

    istream &operator>>(istream &inputStream, Fraction &fraction)
    {
        return inputStream;
    }
}