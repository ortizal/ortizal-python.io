#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout.setf(ios::fixed); // no scientific notation except for the deficit 
    //cout.setf(ios::showpoint); // always show the decimal point 
    cout.precision(0); // two decimals for cents; this is not a gas station!
    float f, c;
    cout << "Please enter Fahrenheit degrees: ";
    cin >> f;
    c = 5.0/9*(f-32);
    cout << c;
    cin.ignore();
    cin.get();
    return 0;

}