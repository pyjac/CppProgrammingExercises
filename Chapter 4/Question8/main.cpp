/*
The roots of the quadratic equation ax 2 + bx + c = 0, a != 0 are given by the
following formula:
    -b +- sqt(b^2 -4ac)/2a

In this formula, the term b^2 - 4ac is called the discriminant. If b^2 - 4ac = 0,
then the equation has a single (repeated) root. If b^2 - 4ac > 0, the
equation has two real roots. If b^2 - 4ac < 0, the equation has two
complex roots. Write a program that prompts the user to input the
value of a (the coefficient of x 2 ), b (the coefficient of x), and c (the
constant term) and outputs the type of roots of the equation. Further-
more, if b 2 À 4ac ! 0, the program should output the roots of the
quadratic equation. (Hint: Use the function pow from the header file
cmath to calculate the square root. Chapter 3 explains how the func-
tion pow is used.)

 */
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c;
    double d, x1,x2;

    cout << "Enter value for a: ";
    cin >> a;

    cout << "Enter value for b: ";
    cin >> b;

    cout << "Enter value for c: ";
    cin >> c;

    d = pow(b,2.0) - 4 * a * c;
    if(d >= 0){
        x1 = - b + sqrt(d) / (2 * a);
        x2 = - b - sqrt(d) / (2 * a);

        cout << "x1 = " << x1 <<endl;
        cout << "x2 = " << x2 <<endl;
    }
    else
    cout << "No real root exist !!" << endl;
    return 0;
}

