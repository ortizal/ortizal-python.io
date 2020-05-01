#include <iostream>
#include <iomanip>

using namespace std;

/**********************************************************************
 * This function will calculate the monthly budget starting with a incomes
 ***********************************************************************/

int main(){  
    cout.setf(ios::fixed); 
    cout.setf(ios::showpoint); 
    cout.precision(2);
    float income, livingExpenses, actualLiving, withheld, offerings, otherExpenses;
    cout << "This program keeps track of your monthly budget\n";
    cout << "\tYour monthly income: ";
    cin >> income;
    cout << "\tYour budgeted living expenses: ";
    cin >> livingExpenses;
    cout << "\tYour actual living expenses: ";
    cin >> actualLiving;
    cout << "\tYour actual withheld: ";
    cin >> withheld;
    cout << "\tYour actual tithe offerenigs: ";
    cin >> offerings;
    cout << "\tYour actual other expenses: ";
    cin >> otherExpenses;
    cout << "\n";
    cout << "The following is a report on your monthly expenses\n";
    cout << "\tItem                Budget          Actual\n";
    cout << "\t=============== =============== ===============\n";
    cout << "\tIncome          " << "$" << setw(14) << income << " $"<< setw(14) << income << endl;
    cout << "\tTaxes           " << "$" << setw(14) << 0.00 << " $"<< setw(14) << withheld << endl;
    cout << "\tTithing         " << "$" << setw(14) << 0.00 << " $"<< setw(14) << offerings << endl;
    cout << "\tLiving          " << "$" << setw(14) << livingExpenses << " $"<< setw(14) << actualLiving << endl;
    cout << "\tOther           " << "$" << setw(14) << 0.00 << " $"<< setw(14) << otherExpenses << endl;
    cout << "\t=============== =============== ===============\n";
    cout << "\tDiference       " << "$" << setw(14) << 0.00 << " $"<< setw(14) << 0.00 << endl;
    cin.ignore();
    cin.get();

    return 0;
} 

