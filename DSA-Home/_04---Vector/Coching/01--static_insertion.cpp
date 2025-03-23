#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v(5,10);
    v[0]=10;
    v[1]=20;
    v[2]=30;
    cout<<"\n The Size Of Vector : "<<v.size()<<endl;
    for(auto f:v)
    {
        cout<<f<<" ";
    }
}