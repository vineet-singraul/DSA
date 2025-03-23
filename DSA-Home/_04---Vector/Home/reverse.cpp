// ### 1. **Reverse a Vector**  
//    **Input:** `{1, 2, 3, 4, 5}`  
//    **Output:** `{5, 4, 3, 2, 1}`  


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v = {3,2,1};
    int n=0;
    for(auto f:v)
    {
        cout<<f<<" ";
    }

    n = v.size();

    for(int i=0 ; i<n/2 ; i++)
    {
        swap(v[i] , v[n-i-1]);
    }

    cout << "Reversed Vector: ";
    for (auto f : v) {
        cout << f << " ";
    }
    
}