/*
You found an exciting summer job for five weeks. It pays, say, $15.50
per hour. Suppose that the total tax you pay on your summer job
income is 14%. After paying the taxes, you spend 10% of your net
income to buy new clothes and other accessories for the next school
year and 1% to buy school supplies. After buying clothes and school
supplies, you use 25% of the remaining money to buy savings bonds.
For each dollar you spend to buy savings bonds, your parents spend
$0.50 to buy additional savings bonds for you. Write a program that
prompts the user to enter the pay rate for an hour and the number
of hours you worked each week. The program then outputs the
following:
a. Your income before and after taxes from your summer job.
b. The money you spend on clothes and other accessories.
c. The money you spend on school supplies.
d. The money you spend to buy savings bonds.
e. The money your parents spend to buy additional savings bonds for
you.

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double TAX_PERCENT = 0.14;
    const double CLOTHES_ACCESS_PERCENT = 0.1;
    const double SCHOOL_SUP_PERCENT = 0.01;
    const double SAVINGS_BONDS_PERCENT = 0.25;
    const double ADD_SAVINGS_BONDS = 0.50;

    int hrsWrkedForWeekOne,hrsWrkedForWeekTwo,hrsWrkedForWeekThree,
            hrsWrkedForWeekFour,hrsWrkedForWeekFive;
    double payRatePerHour;

    double incomeAfterTax,incomeBeforeTax,totalAmount;
    double taxPaid, amtOnClothesAndAccessories,amtOnSchoolSupplies
            , amtOnSavingsBonds,addAmtOnSavingsBonds;

    cout << fixed << showpoint << setprecision(2);
    cout << "Enter the pay rate for an hour: " <<endl;
    cin >> payRatePerHour;

    cout << "Enter number of Hours Worked for Week 1: "<<endl;
    cin >> hrsWrkedForWeekOne;
    cout << "Enter number of Hours Worked for Week 2: "<<endl;
    cin >> hrsWrkedForWeekTwo;
    cout << "Enter number of Hours Worked for Week 3: "<<endl;
    cin >> hrsWrkedForWeekThree;
    cout << "Enter number of Hours Worked for Week 4: "<<endl;
    cin >> hrsWrkedForWeekFour;
    cout << "Enter number of Hours Worked for Week 5: "<<endl;
    cin >> hrsWrkedForWeekFive;

    totalAmount = ( payRatePerHour * hrsWrkedForWeekOne ) +
                  ( payRatePerHour * hrsWrkedForWeekTwo ) +
                  ( payRatePerHour * hrsWrkedForWeekThree ) +
                  ( payRatePerHour * hrsWrkedForWeekFour ) +
                  ( payRatePerHour * hrsWrkedForWeekFive );

    incomeBeforeTax = totalAmount;

    taxPaid = totalAmount * TAX_PERCENT;
    totalAmount -= taxPaid;

    incomeAfterTax = totalAmount;

    amtOnClothesAndAccessories = totalAmount * CLOTHES_ACCESS_PERCENT;
    amtOnSchoolSupplies = totalAmount * SCHOOL_SUP_PERCENT;

    totalAmount -= (amtOnClothesAndAccessories + amtOnSchoolSupplies);

    amtOnSavingsBonds = totalAmount * SAVINGS_BONDS_PERCENT;
    addAmtOnSavingsBonds = static_cast<int>(amtOnSavingsBonds) * ADD_SAVINGS_BONDS;


    cout << "Income before Tax is " << incomeBeforeTax <<endl;
    cout << "Income after taxes is " << incomeAfterTax <<endl;
    cout << "Money spent on clothes and other accessories is "
         << amtOnClothesAndAccessories<<endl;
    cout << "Money spent on school supplies is " << amtOnSchoolSupplies << endl;
    cout << "Money spent on buying savings bonds is " << amtOnSavingsBonds << endl;
    cout << "The money your parents spend to buy additional "
         << "savings bonds is " << addAmtOnSavingsBonds << endl;
    return 0;
}

