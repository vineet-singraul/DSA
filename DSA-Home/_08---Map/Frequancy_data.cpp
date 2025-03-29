#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, roll, del , c=0;
    string name;
    map<int, string> mp ;

    cout << "Enter Size od Map : ";
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cout << "Enter Name : " << i + 1 << " : ";
        cin >> name;
        cout << "Enter Id : ";
        cin >> roll;
        mp[roll] = name;
    }

    cout << "Display All The Data : " << endl;
    for (auto f : mp)
    {
        cout << f.first << " : " << f.second<<endl;
    }

    map<int , string>up;
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        for (auto jt = next(it); jt != mp.end(); ++jt) {
            if(it->second == jt->second)
            {
               c = c + 1;
            }
            up[c] = it->second;
        }
    }
}