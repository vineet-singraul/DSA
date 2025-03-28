#include<iostream>
#include<stack>
using namespace std;

class Vailid {
    public:

    bool Pvalid(string s) {
       stack<char> stk;
       bool r = true;

       for(int i = 0; i < s.size(); ++i) {
          if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
             stk.push(s[i]);
          }
          else if(s[i] == '}') {
             if(!stk.empty() && stk.top() == '{') {
                stk.pop();
             }
             else {
                r = false;
                break;
             }
          }
          else if(s[i] == ']') {
             if(!stk.empty() && stk.top() == '[') {
                stk.pop();
             }
             else {
                r = false;
                break;
             }
          }
          else if(s[i] == ')') {
             if(!stk.empty() && stk.top() == '(') {
                stk.pop();
             }
             else {
                r = false;
                break;
             }
          }
       }

       if(!stk.empty()) {
         return false; 
       }
       else {
         return r;  
       }
    }
};

int main() {
   Vailid ob;
   string s = "{[(]}";
   bool f = ob.Pvalid(s);
   if(f) {
      cout << "It's a Valid Parenthesis.\n";  
   }
   else {
      cout << "This is NOT a Valid Parenthesis.\n"; 
   }
}
