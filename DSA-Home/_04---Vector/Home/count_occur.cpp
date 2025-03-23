// ### 8. **Count Occurrences of an Element**  
//    **Input:** `{1, 2, 3, 2, 4, 2, 5, 2}`  
//    **Element to count:** `2`  
//    **Output:** `4`  


#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v = {1, 2, 3, 2, 4, 2, 5, 2}; 
    int val;
    int count = 0;

    cout<<"Enter A Value To count : ";
    cin>>val;

    for(auto f : v)
    {
        if(val == f)
        {
            count = count + 1;
        }
    }

    cout<<"The Total Count Of "<<val<<" Is : "<<count;
}

