// ### **3. Accessing Elements using Indexing**
// **Question:** Access and print the 3rd element of the vector.  
// **Input:** `{5, 15, 25, 35, 45}`  
// **Output:** `25` 

#include<iostream>
#include<vector>
using namespace std;

class Vaectorsclass{
  
    public:
    vector<int>V = {1,2,3,4,5,6};
    void GetValOfIndex(int ind)
    {
        for(int i=0 ; i<V.size() ; ++i)
        {
            if(i == ind)
            {
                cout<<"The Index Is "<<ind<<" and Value Is : "<<V[i];
            }
        }
    }

};

int main()
{
  Vaectorsclass ob;
  int ind;
  cout<<"Enter Index Value Want To Get : ";
  cin>>ind;

  ob.GetValOfIndex(ind);
}