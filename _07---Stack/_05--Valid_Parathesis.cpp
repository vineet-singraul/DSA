#include <iostream>
#include <stack>
using namespace std;

bool Pvalid(string s)
{
    stack<char> stk;
    bool r = true;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            stk.push(s[i]);
        }
        else if (s[i] == '}')
        {
            if (!stk.empty() && stk.top() == '{')
            {
                stk.pop();
            }
            else
            {
                r = false;
                break;
            }
        } 

        else if (s[i] == ']')
        {
            if (!stk.empty() && stk.top() == '[')
            {
                stk.pop();
            }
            else
            {
                r = false;
                break;
            }
        }

        else if (s[i] == ')')
        {
            if (!stk.empty() && stk.top() == '(')
            {
                stk.pop();
            }
            else
            {
                r = false;
                break;
            }
        }
    }


    if(!stk.empty())
    {
        return false;
    }
    else{
        return true;
    }
}

int main()
{
    string test = "[({)]";
    if (Pvalid(test))
    {
        cout << "Valid\n";
    }
    else
    {
        cout << "Not Valid\n";
    }
    return 0;
}