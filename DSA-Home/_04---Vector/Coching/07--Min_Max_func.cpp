#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>v={1,2,3,4,5};
    for(auto f:v)
    {
       cout<<f<<" ";
    }

    auto f = *max_element(v.begin(),v.end());
    cout<<"\n Max Value Is : "<<f;

    auto f1 = *min_element(v.begin(),v.end());
    cout<<"\n MinbValue Is : "<<f1;
}