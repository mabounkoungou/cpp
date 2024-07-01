#include <iostream>
using namespace std;

int main(){

    string car = "Mercedes";
    string* ptr = &car;


    *ptr = "Honda";
    //DEREFERENCING
    cout << "Memory Address is :"<<" "<< car << endl;
    cout << "Memory Address with pointer is :"<<" "<< *ptr;
    
    return 0;
}