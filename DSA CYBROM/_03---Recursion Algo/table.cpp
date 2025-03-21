#include <iostream>
using namespace std;

void printTable(int num, int multip = 1) {
    if (multip > 10) 
        return;
    
    cout <<num * multip << endl;
    
    printTable(num, multip + 1);
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    printTable(num);
    
    return 0;
}
