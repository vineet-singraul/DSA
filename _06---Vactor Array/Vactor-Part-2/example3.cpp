#include<iostream>
#include<vector>
#include<tuple>
using namespace std;

int main()
{
    int n,roll,age;
    string name;

    vector<tuple<int , string , int >>V;

    cout<<"Enter Number You Want To Insert The Data : ";
    cin>>n;

    for(int i=0 ; i<n ; ++i)
    {
        cout<<"Enter Your Roll Number :";
        cin>>roll;
        cout<<"Enter Your Name : ";
        cin>>name;
        cout<<"Enter Your Age : ";
        cin>>age;

        V.push_back(make_tuple(roll,name,age));
    }

    cout<<"Displayed All The Data : "<<endl;

    for(int i=0 ; i<V.size() ; ++i)
    {
       cout<<get<0>(V[i])<<" : "<<get<1>(V[i])<<" : "<<get<2>(V[i])<<endl;
    }
}