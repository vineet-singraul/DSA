// ### **7. Using front() and back()**
// **Question:** Print the first and last elements of the vector.  
// **Input:** `{100, 200, 300, 400}`  
// **Output:** `Front: 100, Back: 4

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class DataFindMinMax{
   public:

   vector<int>v = {1,2,3,4,5,6};
   void PrintVector()
   {
      for(auto f :v)
      {
        cout<<f<<" ";
      }
      cout<<endl;
   }

   int FindMin()
   {
      auto mi = min_element(v.begin() , v.end());
      cout<<"The Min Value Is : "<<*mi<<endl;
      cout<<endl;
   }

   int FindMan()
   {
      auto ma = max_element(v.begin() , v.end());
      cout<<"The Max Value Is : "<<*ma;
      cout<<endl;
   }
};

int main()
{
  DataFindMinMax ob;
  ob.PrintVector();

  ob.FindMin();
  ob.FindMan();

}