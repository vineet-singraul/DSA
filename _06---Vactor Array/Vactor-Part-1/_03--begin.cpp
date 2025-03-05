#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(5, 10); // Vector of size 5, initialized with 10s
    v[0] = 100; // Setting first element as 100

    vector<int>::iterator it = v.begin(); // Iterator pointing to the first element

    v.insert(it + 2, 100); // Insert 100 at index 2
    v.insert(it , 300);

    for (auto p : v) // Printing the vector
    {
        cout << p << " ";
    }

    return 0; // Ensure proper termination
}
