#include <iostream>
using namespace std;

int power(int base, int times)
{
    if (times == 0)
    {
        return 1;
    }

    return base * power(base, times - 1);
}

int main()
{
    int base, times;

    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the times: ";
    cin >> times;

    int res = power(base, times);
    cout << res;
}
