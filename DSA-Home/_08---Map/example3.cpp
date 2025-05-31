// 1. Insert and Retrieve Values in a Map
// Given a list of key-value pairs, insert them into a map<int, string> and retrieve a value for a given key.

#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{

  int n, roll;
  string name;
  map<int, string> mp;
  cout << "Enter Size Of MAp : ";
  cin >> n;
  for (int i = 0; i < n; ++i)
  {
    cout << "Enter Name : " << i + 1 << " = ";
    cin >> name;
    cout << "Enter Roll Number " << i + 1 << "= ";
    cin >> roll;
    mp[roll] = name;
  }
  for (auto f : mp)
  {
    cout << "Name is : " << f.first << " : " << " roll number is :" << f.second << endl;
  }

  cout << endl;
  cout << "-----------------------" << endl;
  int vala;
  cout << "Enter Value Want To Search : ";
  cin >> vala;
  auto f = mp.find(vala);
  cout << "hare  IS : " << f->second;
}