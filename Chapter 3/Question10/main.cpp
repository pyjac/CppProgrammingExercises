/*
 *
Linda is starting a new cosmetic and clothing business and would like to
make a net profit of approximately 10% after paying all the expenses, which
include merchandise cost, store rent, employees’ salary, and electricity cost
for the store. She would like to know how much the merchandise should
be marked up so that after paying all the expenses at the end of the year she
gets approximately 10% net profit on the merchandise cost. Note that after
marking up the price of an item she would like to put the item on 15% sale.
Write a program that prompts Linda to enter the total cost of the merchan-
dise, the salary of the employees (including her own salary), the yearly rent,
and the estimated electricity cost. The program then outputs how much the
merchandise should be marked up so that Linda gets the desired profit.

 */

#include <iostream>

using namespace std;

int main()
{
    const double PROFIT_PERCENT = 0.01;
    double merchandiseCost, employeeSalary,yearlyRent,estElectricityCost,
            totalCost,netProfit;

    cout << "Enter merchandise cost: ";
    cin >> merchandiseCost;

    cout << "Enter employee salary: ";
    cin >> employeeSalary;

    cout << "Enter yearly rent: ";
    cin >> yearlyRent;

    cout << "Enter the estimated electricity cost: ";
    cin >> estElectricityCost;

    totalCost = merchandiseCost + employeeSalary + yearlyRent +estElectricityCost;
    netProfit = totalCost * PROFIT_PERCENT;

    //Confused :/


    return 0;
}

