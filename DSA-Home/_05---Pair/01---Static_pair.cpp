#include<iostream>
#include<vector>
using namespace std;

int main()
{
   vector<pair<int, string>> V = { {1, "Vineet"}, {2, "Honey"} };
   for (const auto& p : V) 
   {
    cout << "Key: " << p.first << ", Value: " << p.second << endl;
   }
}  