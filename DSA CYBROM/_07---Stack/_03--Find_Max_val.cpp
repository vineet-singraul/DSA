#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> v;
    v.push(12);
    v.push(-13);
    v.push(2);
    v.push(1);

    stack<int> temp = v;
    int minVal = temp.top();

    while (!temp.empty())
    {
        if (temp.top() < minVal)
        {
            minVal = temp.top();
        }
        temp.pop();
    }

    cout << "Minimum value: " << minVal << endl;
}