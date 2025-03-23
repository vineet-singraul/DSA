#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v={1,2,3,4,5};
    for(auto f : v)
    {
        cout<<f<<"\t";
    }
    cout<<"\n";

    cout<<"After INsert one Value : "<<endl;
    vector<int>:: iterator it = v.begin();
    v.insert(it+1 , 200);

    for(auto f : v)
    {
        cout<<f<<"\t";
    }
}