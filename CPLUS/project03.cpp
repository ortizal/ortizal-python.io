/***********************************************************************
* Program:
*    Assignment 16, Project03
*    Brother Schwieder, CS124
* Author:
*    Alexis Ortiz
* Summary: 
*    This is my project about the monthly budget calculate.
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
float getIncome( float incom);
float getBudgetliving(float budget);
float getActualLiving( float aLiving);
float getActualOther( float actualOther);
float getActualTithing(float tinthi);
float getActualTax(float tax);
float computeTithing(float cTithing, float income);
float display(float income,float budgetLiving,float actualTax,float actualTithing,float actualLiving,float actualOther);
/**********************************************************************
 * This function will calculate the monthly budget starting with a incomes
 ***********************************************************************/

int main(){  
    cout.setf(ios::fixed); 
    cout.setf(ios::showpoint); 
    cout.precision(2);
    float income, livingExpenses, actualLiving, withheld, offerings, otherExpenses;/*List float variable*/
    cout << "This program keeps track of your monthly budget\n";
    cout << "Please enter the following:\n"; 
    cout << "\tYour monthly income: ";
    float fIncome = getIncome(income);
    cout << "\tYour budgeted living expenses: ";
    float fBudget = getBudgetliving(livingExpenses);
    cout << "\tYour actual living expenses: ";
    float fActualLiving = getActualLiving(actualLiving);
    cout << "\tYour actual taxes withheld: ";
    float fTax = getActualTax(withheld);
    cout << "\tYour actual tithe offerings: ";
    float fOffering = getActualTithing(offerings);
    cout << "\tYour actual other expenses: ";
    float fOther = getActualOther(otherExpenses);
    display(fIncome, fBudget, fActualLiving, fOffering, fTax, fOther);
    cin.ignore();
    cin.get(); 
    return 0;
} 
float getIncome( float incom){
    cin >> incom;
    return incom;
}
float getBudgetliving(float budget){
    cin >> budget;
    return budget;
}
float getActualLiving( float aLiving){
    cin >> aLiving;
    return aLiving;
}
float getActualOther( float actualOther){
    cin >> actualOther;
    return actualOther;
}
float getActualTithing(float tinthi){
    cin >> tinthi;   
    return tinthi;
}
float getActualTax(float tax){
    cin >> tax;
    return tax;
}
float computeTithing(float income){
    float cTithing = income * 0.10;
    /* And after that, those who have thus been tithed shall 
    pay one-tenth of all their interest annually; and this shall 
    be a standard law unto them forever, for my holy priesthood, 
    saith the Lord. D&C 119:4 */
    return cTithing;
}
float display(float income, float budgetLiving, float actualTax, float actualTithing, float actualLiving, float actualOther){
    float tithings = computeTithing(income);
    float diference = income - actualTax - actualTithing - actualLiving - actualOther;
    float others = income - tithings - budgetLiving;
    cout << "\n";/*Line break*/
    cout << "The following is a report on your monthly expenses\n";
    cout << "\tItem                  Budget          Actual\n";
    cout << "\t=============== =============== ===============\n";
    cout << "\tIncome          " << "$" << setw(11) << income << "    $"<< setw(11) << income << endl;
    cout << "\tTaxes           " << "$" << setw(11) << 0.00 << "    $"<< setw(11) << actualLiving << endl;
    cout << "\tTithing         " << "$" << setw(11) << tithings << "    $"<< setw(11) << actualTithing << endl;
    cout << "\tLiving          " << "$" << setw(11) << budgetLiving << "    $"<< setw(11) << actualTax  << endl;
    cout << "\tOther           " << "$" << setw(11) << others << "    $"<< setw(11) << actualOther << endl;
    cout << "\t=============== =============== ===============\n";
    cout << "\tDifference      " << "$" << setw(11) << 0.00 << "    $"<< setw(11) << diference << endl;
    return 0;
}