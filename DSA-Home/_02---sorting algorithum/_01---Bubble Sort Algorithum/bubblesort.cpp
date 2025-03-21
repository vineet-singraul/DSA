#include <iostream>
using namespace std;

class TOP
{
public:
    bool f = true;
    int counter = 0;
    void BubbleSort(int arr[], int s)
    {
        for (int i = 0; i < s; ++i)
        {
            for (int j = 0; j < s - i - 1; ++j)
            {
                counter++;
                if (arr[j] > arr[j + 1])
                {
                    int temp;
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j] = temp;
                    f = false;
                }
            }
            if (f == true)
            {
                break;
            }
        }
        cout<<"Total Hit time Of Counter Is : "<<counter<<endl;
    }
};

int main()
{
    TOP p;
    // int arr[] = {1,2,3,4,5};
    // int arr[] = {1,2,5,4,3};
    int arr[] = {5, 4, 3, 2, 1};
    int s = sizeof(arr) / sizeof(arr[0]);

    cout << "Befor Apply Sorting  in Array :" << endl;
    for (int i = 0; i < s; ++i)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    cout<<endl;

    p.BubbleSort(arr, s);

    cout << endl;
    cout << "After Apply Sorting  in Array :" << endl;
    for (int j = 0; j < s; ++j)
    {
        cout << arr[j] << " ";
    }
}