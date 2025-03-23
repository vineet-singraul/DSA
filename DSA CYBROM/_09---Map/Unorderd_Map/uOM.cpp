#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<int,string>v;
    int n,roll;
    string name;
    
    cout<<"Enter The Size Of Map : ";
    cin>>n;

    for(int i=1 ; i<=n ; ++i)
    {
       cout<<"Enter Your Roll Number : ";
       cin>>roll;
       cout<<"Enter Your Name : ";
       cin>>name;
       v.insert(make_pair(roll,name));
    }

    cout<<"After Insertion Performed In Map : "<<endl;
    for(auto f:v)
    {
        cout<<"Roll Number Is :"<<f.first<<" : "<<"And Name Is : "<<f.second<<endl; 
    }
}