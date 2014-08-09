/*

Write a program that prompts the user to input a number. The program
should then output the number and a message saying whether the number is
positive, negative, or zero.

 */

#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;
    if(num >= 1) cout << num << " is positive"<<endl;
    else if(num < 0) cout << num << " is negative " << endl;
    else cout << num << " is zero"<<endl;

    return 0;
}

