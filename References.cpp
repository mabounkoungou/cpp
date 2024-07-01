#include <iostream>
using namespace std;

int main(){

    string car = "Mercedes";
    string &vehicle = car;

    cout << "Original car: " << car << endl;
    cout << "Reference to car: " << vehicle << endl;
}