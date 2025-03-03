#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>V{1,2,3,4,5};
    cout<<"Befor make the Empty: \n";
    for(auto p:V)
    {
        cout<<p<<"\t";
    }
    cout<<"\n After make the Empty: \n";

    V.clear();
     if(V.empty())
     {
        cout<<"Vector Is Empty : \n";
     }
    else{
        cout<<"Vactor Is Not Empty : \n";
        for(auto p:V)
        {
            cout<<p<<"\t";
        }
    }
    

}