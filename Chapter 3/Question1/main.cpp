/*
 * By: Pyjac
 */


#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    ifstream inFile;
    ofstream outFile;
    const float PIE = 3.1416;
    float length,width,radius,areaRectangle,perimeter,
            areaCircle,circumference,interest;
    int age;
    char value;
    float interestRate;
    string firstname,lastname;
    double accountBalance,newAccountBalance;

    inFile.open("inData.txt");
    outFile.open("outData.txt");

    inFile >> length >> width;
    inFile >> radius;
    inFile >> firstname >> lastname >> age;
    inFile >> accountBalance >> interestRate;
    inFile >> value;


    areaRectangle = length * width;
    perimeter = 2 * (length + width);

    areaCircle = PIE * radius * radius;
    circumference = 2 * PIE * radius;

    interest = accountBalance * interestRate / 1200;
    newAccountBalance = interest + accountBalance;

    outFile << setprecision(2) << showpoint << fixed;
    outFile << "Reactangle: " << endl;
    outFile << "Length = " << length << ", width = " << width
               << ", area = " << areaRectangle << ", perimeter = "
                  << perimeter << endl;
    outFile << endl;
    outFile << "Circle: " << endl;
    outFile << "Radius: " << radius << ", area = " << areaCircle
               << ", circumference = " << circumference << endl;
    outFile << endl;
    outFile << "Name: " << firstname << " " << lastname << ", age : "
               << age << endl;
    outFile << "Beginning balance = $" << accountBalance
            << ", interest rate = " << interestRate << endl;
    outFile << "Balance at the end of the month = $" << newAccountBalance<< endl;
    outFile << endl;
    outFile << "The character that comes after "<< value
            << " in ASCII set is " << static_cast<char>(value + 1) << endl;

    inFile.close();
    outFile.close();
    return 0;
}

