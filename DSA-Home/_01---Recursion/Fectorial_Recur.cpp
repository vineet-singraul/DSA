#include <iostream>
using namespace std;

int FectorialFind(int number)
{
    if(number == 0)
    {
        return 1;
    }

    return number * FectorialFind(number-1);
}

int main()
{
    int number;
    cout<<"Enter Number for Fectorial Find = ";
    cin>>number;
    int res = FectorialFind(number);
    cout<<res;
    cout<<res;
}
