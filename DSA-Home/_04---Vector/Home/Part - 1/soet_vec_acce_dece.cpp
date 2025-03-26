// ### 3. **Sort a Vector**  
//    **Input:** `{10, 5, 8, 3, 1, 7}`  
//    **Output (Ascending):** `{1, 3, 5, 7, 8, 10}`  
//    **Output (Descending):** `{10, 8, 7, 5, 3, 1}`  

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>V = {1,2,3,5,4};
    cout<<"Befro the Sorting Performed : ";
    for(auto f : V)
    {
        cout<<f<<" ";
    }
    cout<<"\n";
    sort(V.begin() , V.end());
    cout<<"After the Sorting Performed : ";
    for(auto f : V)
    {
        cout<<f<<" ";
    }



    cout<<"\n";
    sort(V.begin() , V.end() , greater<int>());
    cout<<"After the Sorting In Decending Order : ";
    for(auto f : V)
    {
        cout<<f<<" ";
    }
}