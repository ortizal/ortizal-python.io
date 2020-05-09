#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/

void questionPeter();
int responseLord();

int main(){
    // ask Peter's question
    questionPeter();
    // teh first part of the Lord's response
    cout << "Jesus saith unto him, I say not unto thee, Until seven\n";
    cout << "times: but, Until " << responseLord() << ".\n";
    cin.ignore();
    cin.get();
    return 0;
}

void questionPeter(){
   cout << " Lord, how oft shall my brother sin against me, and I forgive him? \n Till seven times?";
   return;
}
int responseLord(){

    return 7 * 70 ;
}