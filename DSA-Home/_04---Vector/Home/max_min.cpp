// ### 2. **Find the Maximum and Minimum Element**  
//    **Input:** `{12, 45, 2, 67, 34}`  
//    **Output:**  
//    - Max: `67`  
//    - Min: `2`  

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>v = {1,2,3,4,5,6};
    auto maxa = *max_element(v.begin(),v.end());
    auto mini = *min_element(v.begin() , v.end());

    cout<<"Max Value Is : "<<maxa<<endl;
    cout<<"Min Value Is : "<<mini;
}
