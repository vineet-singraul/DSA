#include <iostream>
using namespace std;

void Merges(int A[], int low, int mid, int high)
{
    int i, j, k, B[high - low + 1];
    i = low;
    j = mid + 1;
    k = 0;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            ++i;
        }
        else
        {
            B[k] = A[j];
            ++j;
        }
        k++;
    }

    while(i <= mid)
    {
        B[k] = A[i];
        ++i;
        ++k;
    }

    while(j <= high)
    { 
       B[k] = A[j];
       ++j;
       ++k;
    }

    for (i = low, k = 0; i <= high; i++, k++)
    {
        A[i] = B[k];
    }
}

void Divide(int A[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        Divide(A, low, mid);
        Divide(A, mid + 1, high);
        Merges(A, low, mid, high);
    }
}

void PrintArr(int A[], int s)
{
    for (int i = 0; i < s; ++i)
    {
        cout << A[i] << " ";
    }
}
int main()
{
    int A[] = {5, 4, 3, 1, 2};
    int s = sizeof(A) / sizeof(A[0]);

    cout << "Printing Befor Srting : ";
    PrintArr(A, s);

    // Call Divide Function
    Divide(A, 0, s - 1);
    cout<<endl;
    cout<<endl;

    cout << "Printing Afetr Srting : ";
    PrintArr(A, s);
}