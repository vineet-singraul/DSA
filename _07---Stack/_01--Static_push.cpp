#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> v; 


    v.push(10);
    v.push(20);
    v.push(30);
    v.push(40);
    v.push(50);
    cout << "Stack size: " << v.size() << endl;

    while (!v.empty())   
    {
        cout<<v.top()<<"\t";
        v.pop();
    }

}
