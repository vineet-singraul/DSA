#include <iostream>
#include <vector>
using namespace std;

int main()
{
    pair<int,string>p(101,"Vineet");
    p = make_pair(102,"Anmol");
    cout<<p.first<<" : "<<p.second;
}