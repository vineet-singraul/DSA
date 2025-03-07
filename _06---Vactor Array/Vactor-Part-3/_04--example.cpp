#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {3, 4};
    int val1 = 0;
    int val2 = 0;
    int m;
    
    int maxS = max(v1.size(), v2.size());

    for (int i = 0; i < maxS; i++) {
        if (i < v1.size()) {
            val1 = val1 + v1[i];
        }
        if (i < v2.size()) { 
            val2 = val2 + v2[i];
        }
    }

    cout << "V1 : " << val1 << endl;
    cout << "V2 : " << val2 << endl;
 
    m = max(val1 , val2);
    cout<<"\n Mav Value IS : "<<m;

}