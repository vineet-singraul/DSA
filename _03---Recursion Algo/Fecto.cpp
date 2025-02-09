#include <iostream>
using namespace std;

void Fectorial(int num, int &res) 
{
    if (num == 0)
    {
        return;
    }

    res *= num;  
    Fectorial(num - 1, res); 
}

int main()
{
    int num;
    cout << "Enter One Number: ";
    cin >> num;

    int res = 1;

    Fectorial(num, res);  
    cout << "Fectyorial Is: " << res << endl;

    return 0;
}
