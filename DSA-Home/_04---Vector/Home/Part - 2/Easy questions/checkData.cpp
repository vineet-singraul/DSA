// ### **9. Using clear() to Remove All Elements**
// **Question:** Clear the vector and print its size.  
// **Input:** `{1, 2, 3, 4} -> clear()`  
// **Output:** `0`  


#include<iostream>
#include<vector>
using namespace std;

class DataVector{
    public:
    vector<int>v = {1,2,3,4,5};
    
    void DisplayVector()
    {
        for(auto f : v)
        {
           cout<<f<<" ";
        }
        cout<<endl;
    }

    int ClearArray()
    {
        v.clear();
        cout<<"Claer Data : ";
        cout<<endl;
    }
};

int main()
{
    DataVector ob;
    ob.DisplayVector();
    ob.ClearArray();
    ob.DisplayVector();
}