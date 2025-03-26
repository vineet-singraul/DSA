#include<iostream>
#include<vector>
using namespace std;

class Vectors {
    public:
    int roll;
    string name;
    vector<int> v;

    void InputVector(int n) {
        cout << "Vector size: " << n << endl;
        v.resize(n);
        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
    }

    void PrintVector() {
        cout << "Vector Elements: ";
        for (int x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
};

int main() {
    Vectors obj;
    int n;
    cout << "Enter Size Of Vector: ";
    cin >> n;

    obj.InputVector(n);
    obj.PrintVector();
}
