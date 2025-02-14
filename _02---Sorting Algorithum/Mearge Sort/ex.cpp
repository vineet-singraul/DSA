#include <iostream>
using namespace std;

void merges(int A[], int low, int mid, int heigh)
{
    int i, j, k, B[heigh - low + 1];
    i = low;
    j = mid + 1;
    k = 0;

    while (i <= mid && j <= heigh)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
        }
        else
        {
            B[k] = A[j];
            j++;
        }
        k++;
    }

    while (i <= mid)
    {
        B[k] = A[i];
        i++;
        k++;
    }

    while (j <= heigh)
    {
        B[k] = A[j];
        j++;
        k++;
    }

    for (i = low, k = 0; i <= heigh; i++, k++)
    {
        A[i] = B[k];
    }
}


void divide(int A[], int low, int heigh)
{
    int mid;
    if (low < heigh)
    {
        mid = (low + heigh) / 2;
        divide(A, low, mid);
        divide(A, mid + 1, heigh);
        merges(A, low, mid, heigh);
    } 
}

void printarr(int A[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << A[i] << "\t";
    }
    cout << "\n";
}

int main()
{
    int A[] = {5,4,3,1,2};
    // int A[] = {3, 5, 6, 8, 4, 5, 7, 6, 3};
    int n = sizeof(A) / sizeof(A[0]);

    cout << "------------- BEFORE MERGE SORT -------------\n";
    printarr(A, n);

    divide(A, 0, n - 1);

    cout << "------------- AFTER MERGE SORT -------------\n";
    printarr(A, n);

    return 0;
}
