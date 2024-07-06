void PassArrayAsAFunction(int Numbers[5]){
    for (int i = 0; i < 5, i++){
        cout << Numbers[i] << endl;

    }
}

int main() { 
    int Numbers[5] = {10,20,30,40,50};
    PassArrayAsAFunction(Numbers);
}