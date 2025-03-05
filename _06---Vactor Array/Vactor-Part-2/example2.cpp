#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<pair<int,string>>V;
    int roll,n; 
    string name;

    cout<<"Enter Number You Want To Insert In Pairs : ";
    cin>>n;

    for(int i=0 ; i<=n ; i++)
    {
        cout<<"Enter Roll Number : ";
        cin>>roll;
        cout<<"Enter Name : ";
        cin>>name;

        V.push_back(make_pair(roll,name));
    }

    cout<<"----------------------";
    cout<<"The Display Data Table"<<endl;
    cout<<"RollNumber"<<"\t"<<"Name"<<endl;
    for(int i=0 ; i<V.size() ; i++)
    {
       cout<<V[i].first<<"\t"<<" :\t"<<V[i].second<<endl;
    }
}
