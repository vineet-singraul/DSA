#include<iostream>
#include<map>
using namespace std;
 
int main()
{
    int n,roll,del;
    string name ;
    map<int ,string>mp;

    cout<<"Enter Size od Map : ";
    cin>>n;
    for(int i=0 ; i<n ; ++i)
    {
       cout<<"Enter Name : "<<i+1<<" : ";
       cin>>name;
       cout<<"Enter Id : ";
       cin>>roll;
       mp[roll] = name;
    }
    
    cout<<"Display All The Data : "<<endl;
    for(auto f : mp)
    {
        cout<<f.first<<" : "<<f.second;
    }
    cout<<"Enter Value Want To Delete : ";
    cin>>del;
    auto f = mp.find(del);
    mp.erase(f);
    cout<<endl;
    cout<<"Display  All The Data After Deleted : "<<endl;
    for(auto f : mp)
    {
        cout<<f.first<<" : "<<f.second;
    }
}