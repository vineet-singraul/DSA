#include <iostream>
using namespace std;

class TOP
{
   public:
   void InsertionSort(int arr[] , int s)
   {
       for(int i=1 ; i < s ; ++i)
       {
         int chotu = i;
         while(chotu > 0 && arr[chotu] < arr[chotu-1])
         {
            int temp;
            temp = arr[chotu];
            arr[chotu] = arr[chotu - 1];
            arr[chotu - 1] = temp;
            chotu--;
         }
       }
   }
};

int main()
{
    TOP d;
    int arr[] = {5, 4, 3, 2, 1};
    int s = sizeof(arr) / sizeof(arr[0]);

    cout << "\nBefore Applying Sorting :" << endl;
    for (int i = 0; i < s; ++i)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    d.InsertionSort(arr, s);

    cout << "After Applying Sorting :" << endl;
    for (int i = 0; i < s; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
