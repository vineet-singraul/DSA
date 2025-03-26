// ### **11. Iterating Using an Iterator**
// **Question:** Use an iterator to print all elements.  
// **Input:** `{5, 10, 15}`  
// **Output:** `5 10 15`  

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {5, 10, 15};

    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
