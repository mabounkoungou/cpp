#include <iostream>
using namespace std;

enum Level{
    LOW = 10,
    MEDIUM = 20,
    HIGH = 30
};

int main(){
    enum Level varaible_x = MEDIUM;
    cout << "Value of varaible_x: " << varaible_x << endl;

    return 0;
}