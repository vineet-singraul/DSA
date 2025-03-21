#include <iostream>
using namespace std;
template<typename t1, typename t2>
void sum(t1 x, t2 y) {
    cout << x + y << endl;
}


template<typename h1,typename h2>
void mul(h1 x , h2 y)
{
    cout<<x*y<<endl;
}

int main()
{
    sum(10.7,20.5);
    mul(10.3,20);
}