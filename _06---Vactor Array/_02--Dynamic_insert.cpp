#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<int>V;

    int n,b;
    cout<<"Enter A Number Want To Insert :";
    cin>>n;

    for(int i=0 ; i<n ; ++i)
    {
      cout<<"Enter A Value : ";
      cin>>b;
      V.push_back(b);
    }

    V.push_back(1000);
    for(auto p:V)
    {
        cout<<p<<"\t";
    }
}