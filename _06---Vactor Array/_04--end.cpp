#include <iostream>
#include <vector>
#include <algorithm>  // Include this for find()
using namespace std;

int main()
{      
    int f;
    vector<int> V{1, 2, 3, 4, 5};

    // Printing the vector
    for (auto p : V)
    {
        cout << p << " ";
    }
    cout << endl;
    cout<<"Enter To Find : ";
    cin>>f;
    // Using find() to locate element '3'
    auto it = find(V.begin(), V.end(), f);

    cout<<*it;

    V.erase(it);

    for (auto p : V)
    {
        cout << p << " ";
    }

    return 0;
}
