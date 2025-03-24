#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int , string>v = {{1,"Vineet"},{2 , "Honey"}};
    cout<<"The Size Of Map : "<<v.size()<<endl;

    cout<<"The Map Value Is Hare : "<<endl;
    for(auto f:v)
    {
        cout<<f.first<<" : "<<f.second<<endl;
    }
}