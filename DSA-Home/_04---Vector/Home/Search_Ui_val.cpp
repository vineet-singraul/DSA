// ### 4. **Find an Element in a Vector**  
//    **Input:** `{4, 7, 1, 9, 3, 6}`, Search for `9`  
//    **Output:** `"Found"`  

//    **Input:** `{4, 7, 1, 3, 6}`, Search for `9`  
//    **Output:** `"Not Found"`  

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>V = {1,2,3,4,5};
    int val;
    for(auto f : V)
    {
        cout<<f<<" ";
    }
    cout<<"\n";
    cout<<"Enter A Value For Search : ";
    cin>>val;

    auto it = find(V.begin() , V.end() , val);
    cout<<"value is : "<<*it<<endl;
    if(*it == val)
    {
        cout<<"Yas Value Is Find : ";
    }
    else{
        cout<<"Not Avalable : ";
    }
}