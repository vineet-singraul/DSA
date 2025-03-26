// ### **5. Finding Vector Size**
// **Question:** Print the size of a vector.  
// **Input:** `{1, 2, 3, 4}`  
// **Output:** `4`  


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Findval{
    
    public:
    vector<int>v = {1,3,2,4,5,6};
    
    int FindData(int val)
    {
        auto f = find(v.begin() , v.end() ,val);
        if(*f == val)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
    
    void PrintVector()
    {
        for(auto f : v)
        {
           cout<<f<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    Findval ob;
    int val;
    ob.PrintVector();
    cout<<"Enter Value You Want To Find :";
    cin>>val;
    int s = ob.FindData(val);
    if(s)
    {
        cout<<"Got Value : ";
    }
    else{
        cout<<"Not Found : ";
    }
}