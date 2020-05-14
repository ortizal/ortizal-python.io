/***********************************************************************
* Program:
*    Assignment 16, If Statements
*    Brother Schwieder, CS124
* Author:
*    Alexis Ortiz
* Summary: 
*    determine which tax bracket a user is in.
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

/*********************** 
*Declararion functions 
*************************/
float computeTax(float income);
/**********************************************************************
 * This function will determine which tax bracket a user is in
 ***********************************************************************/

int main(){  
    cout.setf(ios::fixed); 
    cout.setf(ios::showpoint); 
    cout.precision(3);
    float income;
    cout << "Income: ";
    cin >> income;
    float tax = computeTax(income);

    cin.ignore();
    cin.get();
    return 0;
} 
float computeTax(float income){
    if (income >= 0 && income <= 15.100)
        cout << "Your tax bracket is 10%";
    else if(income > 15.100 && income <= 61.300)
        cout << "Your tax bracket is 15%";
    else if(income > 61.300 && income <= 123.700)
        cout << "Your tax bracket is 25%";
    else if(income > 123.700 && income <= 188.450)
        cout << "Your tax bracket is 28%";
    else if(income > 188.450 && income <= 336.550)
        cout << "Your tax bracket is 33%";
    else if(income > 336.550)
        cout << "Your tax bracket is 35%";
return income;
}