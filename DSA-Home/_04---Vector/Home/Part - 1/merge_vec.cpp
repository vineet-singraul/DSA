// ### 6. **Merge Two Vectors**  
//    **Input:** `{1, 3, 5}` and `{2, 4, 6}`  
//    **Output:** `{1, 2, 3, 4, 5, 6}`  



#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>v = {1,3,5};
    vector<int>v1 = {2,4,6};

    for(int i=0 ; i<v1.size() ; ++i)
    {
        v.push_back(v1[i]);
    }
    sort(v.begin(),v.end());
    cout<<"Displaying All The Data :";
    for(auto f : v)
    {
        cout<<f<<" ";
    }
}