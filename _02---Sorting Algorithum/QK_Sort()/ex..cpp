#include <iostream>
using namespace std;

int Divide(int arr[], int low, int heigh)
{
    int pv = arr[low];
    int i = low + 1;
    int j = heigh;

    do
    {
        while (arr[i] < pv)
        {
            i++;
        }

        while (arr[j] > pv)
        {
            j--;
        }

        if (i < j)
        {
            int temp;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);

    int temp;
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

class top
{
public:
    void InsertionSort(int arr[], int s)
    {
    }
};

int main()
{
    top p;
    int a[] = {4, 5, 6, 7, 3};
    int s = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < s; i++)
    {
        cout << a[i] << "\t";
    }
    p.InsertionSort(a, s);
    cout << "\n After Appliying : \n";

    for (int i = 0; i < s; i++)
    {
        cout << a[i] << "\t";
    }
}

// Spcce Complecity ---> yadi code me koi