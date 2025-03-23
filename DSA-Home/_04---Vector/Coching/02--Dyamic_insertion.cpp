#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,val;
    cout<<"Enter the Size Of Vector : ";
    cin>>n;
    vector<int>v;

    for(int i=0 ; i<n ; ++i)
    {
        cout<<"Enter a element : ";
        cin>>val;
        v.push_back(val);
    }

    cout<<"After Inserting Element : "<<endl;
    for(auto f : v)
    {
        cout<<f<<" ";
    }
    

}