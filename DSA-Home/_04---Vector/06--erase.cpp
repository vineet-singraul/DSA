#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int del;
   vector<int>v={1,3,6,2,3};
   for(auto f : v)
   {
    cout<<f<<"\t";
   }

   cout<<"\nEnter Value You Want To Delete : ";
   cin>>del;
   cout<<"After Erase Value: "<<endl;
   auto er = find(v.begin() , v.end() , del);
   v.erase(er);

   cout<<"\n After Delete value : \n ";
   for(auto f : v)
   {
    cout<<f<<"\t";
   }

}