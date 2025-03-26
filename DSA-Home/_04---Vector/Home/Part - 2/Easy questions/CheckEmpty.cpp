// # ### **6. Checking if a Vector is Empty**
// # **Question:** Check if a vector is empty.  
// # **Input:** `{}`  
// # **Output:** `Empty`  



#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class CheckVector {
    public:
    vector<int> v = {1, 2, 3, 4, 5, 6};
    
    void PrintVector() {
        for (auto f : v) {
            cout << f << " ";
        }
        cout << endl;
    }
    
    bool CheckData() {
        return v.empty();
    }
};

int main() {
    CheckVector ob;
    ob.PrintVector();
    
    if (ob.CheckData()) {
        cout << "Yes, Empty" << endl;
    } else {
        cout << "Not Empty" << endl;
    }
}
