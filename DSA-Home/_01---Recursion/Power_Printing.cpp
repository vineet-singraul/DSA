#include <iostream>
using namespace std;

int Power(int base, int times)
{
    if (times == 0)
    {
        return 1;
    }

    return base * Power(base, times - 1);
}

int main()
{
    int base, times;
    cout << "Enter The Base : ";
    cin >> base;
    cout << "Enter The times Perform : ";
    cin >> times;
    int res = Power(base, times);
    cout << "The Total Power Is : " << res;
}