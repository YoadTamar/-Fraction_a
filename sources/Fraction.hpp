#pragma once

#include <iostream>

using namespace std;

namespace ariel
{
    /**
     * this class is a fraction
     * @author Yoad Tamar
    */
    class Fraction
    {
        private:
            int numerator, denominator; // this is up and bottom of fraction
        
        public:
            Fraction(float); // this is the constructor for coneverting float to fraction
            Fraction(int, int); // this is the constructor for creating fraction from up and bottom numbers
            

            // those are getters method for the fraction numerator and fraction denumumenator
            int getNumerator() const {
                return this->numerator;
            }

            int getDenominator() const {
            return this->denominator;
            }

            // those are operators for mathematical calculations: addition, substraction, multiplication, division
            friend Fraction operator+(const Fraction&, const Fraction&);
            friend Fraction operator-(const Fraction&, const Fraction&);
            friend Fraction operator*(const Fraction&, const Fraction&);
            friend Fraction operator/(const Fraction&, const Fraction&);

            // those are operators for increasing or decreasing a fraction
            Fraction operator++(int);
            Fraction operator--(int);
            Fraction operator--();
            Fraction operator++();
            

            // those are operators for compression of fraction
            friend bool operator<(const Fraction&, const Fraction&);
            friend bool operator==(const Fraction&, const Fraction&);
            friend bool operator>(const Fraction&, const Fraction&);
            friend bool operator<=(const Fraction&, const Fraction&);
            friend bool operator>=(const Fraction&, const Fraction&);

            // input and output for fraction
            friend ostream& operator<<(ostream&, const Fraction&);
            friend istream& operator>>(istream&, Fraction&);
    };
}