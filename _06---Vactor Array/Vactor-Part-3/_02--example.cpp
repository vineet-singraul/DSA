#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {3, 4};
    vector<int> v3;

     int maxSize = max(v1.size(), v2.size());
    //  cout<<maxSize;

    for (int i = 0; i < maxSize; i++) {
        int val1 = (i < v1.size()) ? v1[i] : 0;
        int val2 = (i < v2.size()) ? v2[i] : 0;
        v3.push_back(val1 + val2); 
    }

    // Print The Vector Value :
    cout << "Sum Of The Vector : { ";
    for (int num : v3) {
        cout << num << " ";
    }
    cout << "}" << endl;

    return 0;
}