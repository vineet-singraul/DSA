#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int>v;
    int n , val;
    cout<<"Enter Value You Want To insert in stack :";
    cin>>n;
 
    for (int i=0 ; i<n ; ++i)
    {
        cout << "Enter Value No " << i + 1 << " : ";
        cin>>val;
        v.push(val);
    }


    while(!v.empty())
    {
        cout<<"Value IS : "<<v.top()<<endl;
        v.pop();
    }
}