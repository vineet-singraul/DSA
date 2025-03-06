#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {3, 4, 5};
    vector<int> v3;
    int val = 0;
    vector<vector<int>> v = {v1, v2};

    cout << "--------------------------------" << endl;
    
    for (int i = 0; i < v.size() - 1; i++) {  
        for (int j = 0; j < v[i].size(); j++) {
            val = v[i][j] + v[i+1][j];  
            v3.push_back(val);
        }
    }

    // Print The Sum Of Vector array : 
    cout << "Sum Of The Vector : { ";
    for (int i = 0; i < v3.size(); ++i) {  
        cout << v3[i] << " ";
    }
    cout<<"}";

    return 0;
}
