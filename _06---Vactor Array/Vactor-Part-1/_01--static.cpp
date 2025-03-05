#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>V(5,10);
     V[0] = 90;
     V[1] = 20;
     V[2] = 30;

     cout<<"Size "<<V.size()<<endl;

     for (auto p:V)
     {
        cout<<p<<"\t";
     }
} 