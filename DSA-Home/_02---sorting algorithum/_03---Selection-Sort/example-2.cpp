#include <iostream>
using namespace std;

class Top
{
public:
    void SelectionSort(int arr[], int s)
    {
       for(int i=0 ; i<s-1 ; ++i)
       {
         for(int j=i+1 ; j<s ; ++j)
         {
             if(arr[i] > arr[j])
             {
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
             }
         }
       }
    }
};

int main()
{
    Top p;
    int arr[] = {5, 4, 3, 2, 1};
    int s = sizeof(arr) / sizeof(arr[0]);

    cout << "\nBefore Applying Sorting :" << endl;
    for (int i = 0; i < s; ++i)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    p.SelectionSort(arr, s);

    cout << "After Applying Sorting :" << endl;
    for (int i = 0; i < s; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
