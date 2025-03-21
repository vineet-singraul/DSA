#include <iostream>
using namespace std;

class TOP
{
public:
    bool f = true;
    void BUbble(int arr[], int s)
    {
        for (int i = 0; i < s; ++i)
        {
            for (int j = 0; j < s - i - 1; ++j)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp;
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    f = false;
                }
            }
            if (f == true)
            {
                break;
            }
        }
    }
};

int main()
{
    TOP p;

    int arr[] = {5, 4, 3, 2, 1};
    int s = sizeof(arr) / sizeof(arr[0]);

    cout << "Befor Data Sorting : " << endl;
    for (int i = 0; i < s; ++i)
    {
        cout << arr[i] << " " << " ";
    }
    cout << endl;
    p.BUbble(arr, s);

    cout << "After Data Sorting :" << endl;
    for (int j = 0; j < s; ++j)
    {
        cout << arr[j] << " " << " ";
    }
}