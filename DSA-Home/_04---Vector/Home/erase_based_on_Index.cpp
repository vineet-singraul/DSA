// ### 9. **Erase a Range of Elements**  
//    **Input:** `{5, 10, 15, 20, 25, 30}`  
//    **Erase from index 2 to 4** (0-based)  
//    **Output:** `{5, 10, 30}`

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v = {5, 10, 15, 20, 25, 30};
    int st = 1, ed;
    
    cout << "Enter Starting Index : ";
    cin >> st;
    
    cout << "Enter Ending Index : ";
    cin >> ed;

    v.erase(v.begin() + st , v.begin() + ed); 

    for (auto f : v)
    {
        cout << f << " ";
    }
}
