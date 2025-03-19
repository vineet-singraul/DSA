






#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>v1={5,4,3,1,2,2,3,1};
    sort(v1.begin(),v1.end());
    int x = 1;
    for (int i=0; i<v1.size() ; i++)   
    {
       if(v1[x-1]!=v1[i])
       {
        v1[x] = v1[i];
        x++;
       }
    }

    for(int i=0 ; i<x ; i++)
    {
        cout<<v1[i]<<"\t";
    }
}