// ### 5. **Remove Duplicates from a Vector**  
//    **Input:** `{1, 2, 2, 3, 4, 4, 5, 6, 6}`  
//    **Output:** `{1, 2, 3, 4, 5, 6}`  

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     vector<int>v = {1, 2, 2, 3, 4, 4, 5, 6, 6};
//     for(int i=0 ; i<v.size();++i)
//     {
//         for(int j=i+1 ; j<v.size();j++)
//         {
//             if(v[i]==v[j])
//             {
//                 v.erase(v.begin()  + v[j]);
//             }
//         }
//     }

//     cout<<"Display All Value From Vector : \n";
//     for(auto f :v)
//     {
//         cout<<f<<" ";
//     }
// }



//  +++++++++++++++++++++++ OR OR OR OR OR OR OR OR ++++++++++++++++++++++++++
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v = {10, 20, 10, 30, 40, -30, 50, 60, 50, 70, 80, 90, 90, 100};

    sort(v.begin(),v.end());

    auto last = unique(v.begin(),v.end());
    
    v.erase(last , v.end());

    cout<<"Display All Value From Vector : \n";
    for(auto f :v)
    {
        cout<<f<<" ";
    }
}