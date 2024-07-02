#include <iostream>
using namespace std;

void MyFunction(string car = "G Wagon"){
    cout << "Car is :" << " "<< car <<endl;
}

int main(){
    MyFunction("Ford");
    MyFunction("BMW");
    MyFunction();
    MyFunction("Mercedes Benz");
}