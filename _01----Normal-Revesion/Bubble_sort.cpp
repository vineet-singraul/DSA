#include <iostream>
using namespace std;

class Top
{
    public:
    void show(int arr[], int s)
    {
        if(s == 0){
                cout<<"no data";
            }
        for(int i = 0 ; i<s ; i++)
        {
            if(i == s-1)
            {
                cout<<arr[i];
            }
            else{
                cout<<arr[i]<<",";    
            }
        }
    }
};

int main()
{
    // int a[5] = {2,3,4,5,6};
    int a[5];
    int s = sizeof(a) / sizeof(a[0]);
    Top p;
    p.show(a , s);
}

// last me , nhi aana cahiye 