//Pass By Reference
#include <iostream>
using namespace std;

void SwapByReference(int &x, int &y ){

    int Swap = x;
    x = y;
    y = Swap;

}



int main() {
    int FNum = 10;
    int SNum = 20;
    
    cout << " Before Swap:" <<"First Number is: " << FNum << "Second Number is: " << SNum << endl;
   //After Swap 
   SwapByReference(FNum,SNum);
       cout << " Before Swap:" <<"First Number is: " << FNum << "Second Number is: " << SNum << endl;

}