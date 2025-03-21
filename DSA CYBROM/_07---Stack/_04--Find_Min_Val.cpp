#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> v;
    v.push(1);
    v.push(-2);
    v.push(3);
    v.push(40);


    int val = v.top();
    while (!v.empty())
    {
        if(val <= v.top())
        {
            val = v.top();
        }
        v.pop();
    }

    cout<<endl;
    cout<<val;
    
}