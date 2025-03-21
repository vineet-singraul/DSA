#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int val;
    vector<int>v={1,2,3,4,5};
    cout<<"Enter Value for check :";
    cin>>val;
    auto re = find(v.begin() , v.end() , val);
    cout<<"Value index Is : "<<*re;
}