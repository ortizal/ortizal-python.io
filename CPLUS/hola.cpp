#include <iostream>
#include <iomanip>

using namespace std;
int main(){
//configure the output to display money 
    cout.setf(ios::fixed); // no scientific notation except for the deficit 
    cout.setf(ios::showpoint); // always show the decimal point 
    cout.precision(2); // two decimals for cents; this is not a gas station! 
    
    // display the columns of numbers 
    cout << "\t$" << setw(10) << 43.12 << endl; 
    cout << "\t$" << setw(10) << 115.2 << endl; 
    cout << "\t$" << setw(10) << 83299.3051 << endl;
    cin.ignore();  
    cin.get();
    return 0;
}