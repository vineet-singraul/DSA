#include <iostream>
using namespace std;

template <typename t1>
class Bhopal {
    t1 x;
public:
    Bhopal(t1 a) {
        x = a;
    }

    void show() {
        cout << "Value Of X Is : " << x << endl;
    }
};

int main() {
    Bhopal<char> ob('A');
    ob.show();
}
