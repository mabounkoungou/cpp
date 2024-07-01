#include <iostream>
using namespace std;

int main(){

    string car = "Mercedes";
    string* ptr = &car;


    *ptr = "Honda";
    //DEREFERENCING
    cout << "Memory Address is :"<<" "<< car ;
    cout << "Memory Address with pointer is :"<<" "<< *ptr;
    
    return 0;
}