/*

Write a program that prompts the user to input an integer between 0 and 35 . If
the number is less than or equal to 9 , the program should output the number;
otherwise, it should output A for 10 , B for 11 , C for 12 . . . and Z for 35 . (Hint:
Use the cast operator, static_cast<char>( ) , for numbers >= 10 .)


 */
#include <iostream>

using namespace std;

int main()
{
    int num;
    char ch;

    cout << "Enter an interger between 0 and 35: ";
    cin >> num;
    if(num <= 9){
        cout << num <<endl;
    }
    else if (num >= 10 && num <= 35){
        num -= 10;
        ch = static_cast<char>(num + 65);
        cout << ch <<endl;
    }
    else{
        cout << "invalid input ..." <<endl;
    }
    return 0;
}

