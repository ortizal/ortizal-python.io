#include <iostream>
#include <iomanip>
using namespace std;
int main(){
     //configure the output to display money 
    cout.setf(ios::fixed); // no scientific notation except for the deficit 
    cout.setf(ios::showpoint); // always show the decimal point 
    cout.precision(2); // two decimals for cents; this is not a gas station! 
    
/*    // display the columns of numbers 
    cout << "\t$" << setw(10) << 43.12 << endl; 
    cout << "\t$" << setw(10) << 115.2 << endl; 
    cout << "\t$" << setw(10) << 83299.3051 << endl;
    cout << "\t$" << setw(10) << 73948.34212 << "\t$" << setw(10) << 21386120.2312 << endl;
    float income;
    cout << "\t Your monthly income: ";
    cin >> income;
    cout << "Your income is: " << "$" << setw(9) << income;
    cin.ignore();  
    cin.get(); */
    char s = 47;
    char bs = 92;
    cout << s << bs << s << bs << s << bs << endl;
    cout << bs << s << bs << s << bs << s << endl;
    cout << "\t1\t2\t3\n\t4\t5\t6\n\t7\t8\t9\n";
/* //////////////////////////////////////////////////// */
    cout << "I am taking\n";
    cout << "\t \"CS124\"\n";
/* {{{{{{{{{{{{{{{{{{{{{{{{{{{{}}}}}}}}}}}}}}}}}}}}}}}}}}}} */
    cout << "Bill:\n";
    cout << "\t" << "$" << setw(6) << 10.00 << " - " << "Price\n";
    cout << "\t" << "$" << setw(6) << 1.50 << " - " << "Tip\n";
    cout << "\t" << "$" << setw(6) << 11.50 << " - " << "Total\n";
/* [[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]] */
    string name;
    cout << "Write your first name: \n";
    cin >> name;
    cout << name;
    cin.ignore();  
    cin.get();
    return 0;
}