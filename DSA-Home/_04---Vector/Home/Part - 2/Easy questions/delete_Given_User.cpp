// ### **4. Removing Elements using pop_back()**
// **Question:** Remove the last element from the vector and print the updated vector.  
// **Input:** `{10, 20, 30, 40, 50} -> pop_back()`  
// **Output:** `10 20 30 40`  



#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class DeletItemOFvector{
    public:
    vector<int>V = {1,2,3,4,5,6};
    void DeleteItems(int val)
    {
        cout<<"Befor Delting Vector Value : ";
        PrintVector();
        
        auto F = find(V.begin() , V.end() , val);
        V.erase(F);
        
        cout<<"After Delting Vector Value : ";
        PrintVector();
    }

    void PrintVector()
    {
        for(auto f : V)
        {
            cout<<f<<" ";
        }
        cout<<endl;
    }
};

int main()
{
  DeletItemOFvector ob;
  int val;
  ob.PrintVector();
  cout<<"Enter Value Want To delete : ";
  cin>>val;
  ob.DeleteItems(val);
}