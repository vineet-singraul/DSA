#include<iostream>
#include<stack>
using namespace std;

class Valid
{
    public:
    bool Pvalid(string s)
    {
         stack<char> stk;
         bool r = true;
         for(int i = 0; i < s.size(); i++)
         {
             if(s[i] == '{' || s[i] == '[' || s[i] == '(')
             {
                 stk.push(s[i]);
             }
             
             else if(s[i] == '}')
             {
                 if(!stk.empty() && stk.top() == '{')  // Fixed condition
                 {
                     stk.pop();  
                 }
                 else
                 {
                     r = false;
                     break;
                 }
             }
             else if(s[i] == ']')  // Fixed condition
             {
                 if(!stk.empty() && stk.top() == '[')  // Fixed condition
                 {
                     stk.pop();  
                 }
                 else
                 {
                     r = false;
                     break;
                 }
             }
             else if(s[i] == ')')  // Fixed condition
             {
                 if(!stk.empty() && stk.top() == '(')  // Fixed condition
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

         if(!stk.empty())  // Fixed return condition
         {
             return false;
         }
         else
         {
             return r;
         }
    }
};

int main()
{
    Valid ob;
    string s;
    cout << "Enter a string of brackets: ";
    cin >> s;

    bool f = ob.Pvalid(s);
    if(f)
    {
       cout << "Valid";
    }
    else
    {
        cout << "Not Valid";  
    }
}
