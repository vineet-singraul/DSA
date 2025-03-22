#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,val;
    string name;
    vector<pair<int , string>>V;
    cout<<"Enter The Size Of Array :";
    cin>>n;

    for(int i=0 ; i<n ; ++i)
    {
        cout<<"Enter A Roll Number : ";
        cin>>val;
        cout<<"Enter A Name : ";
        cin>>name;
        V.push_back(make_pair(val , name));
    }

    for(auto f : V)
    {
        cout<<"Name IS: "<<f.first<<" : "<<"Roll Number Is : "<<f.second<<endl;
    }
}