#include <iostream>
using namespace std;

void MyFunction(string car = "Cheverolet", int year = 2024){
    cout << "Car is :" << " "<< car << " and year is " << year <<endl;
}

int main(){
    MyFunction("Ford",2023);
    MyFunction("BMW",2024);
    MyFunction();
    MyFunction("Mercedes Benz", 2023);
}