#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>V{1,2,3,4,5};
    int ui;
    cout<<"Enter val :";
    cin>>ui;
    auto it = find(V.begin() , V.end() , ui);
    // cout<<*it;
   
    auto deleted = V.erase(it);
    cout<<"The Deleted Value Is : "<<*deleted<<endl;
    for(auto p:V)
    {
        cout<<p<<"\t";
    }
    cout<<endl;
    cout<<"The Max Value In Vactor : "<<*max_element(V.begin(),V.end());
}