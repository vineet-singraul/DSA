#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>v = {1,2,3,4,5,5,6,7,8,9,99};
    int val;
    
    for(auto f : v)
    {
        cout<<f<<" ";
    }
    
    cout<<"\nEnter A Value You Want To Delete : ";
    cin>>val;
    
    auto f = find(v.begin() , v.end() , val);
    v.erase(f);
    
    for(auto f : v)
    {
        cout<<f<<" ";
    }
    
}