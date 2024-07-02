#include <iostream>
using namespace std;

void Function_1 (string name){
    cout << "Hello, " << name << "!" << endl;
}

int main(){
    Function_1("John Doe");
    Function_1("Helina");
    return 0;
}