/*
 * 3.
    Write a program that prompts the user to enter the weight of a person in
    kilograms and outputs the equivalent weight in pounds. Output both the
    weights rounded to two decimal places. (Note that 1 kilogram = 2.2
    pounds.) Format your output with two decimal places.
 *
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double weightInKilogram , weightInPounds;
    const double KILO_TO_POUND = 2.2;

    cout << fixed << setprecision(2) << showpoint;
    cout << "Enter your weight in Kilograms: ";
    cin >> weightInKilogram;

    weightInPounds = weightInKilogram * KILO_TO_POUND;

    cout << endl;
    cout << "Your weight in Pounds is " << weightInPounds <<endl;

    return 0;
}

