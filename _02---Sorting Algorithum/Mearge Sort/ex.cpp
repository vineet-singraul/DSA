


#include <iostream>
using namespace std;

class Top
{
public:
    void merges(int A[], int low, int mid, int height)
    {
        int i, j, k, B[height - low + 1]; // Fixed typo (heigh → height)
        i = low;
        j = mid + 1;
        k = 0;

        while (i <= mid && j <= height)
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

        while (j <= height)
        {
            B[k] = A[j];
            j++;
            k++;
        }

        for (i = low, k = 0; i <= height; i++, k++)
        {
            A[i] = B[k];
        }
    }

    void divide(int A[], int low, int height)
    {
        int mid;
        if (low < height)
        {
            mid = (low + height) / 2;
            divide(A, low, mid);
            divide(A, mid + 1, height);
            merges(A, low, mid, height);
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
}; // Added missing semicolon

int main()
{
    Top prog;
    int A[] = {5, 4, 3, 1, 2};
    int n = sizeof(A) / sizeof(A[0]);

    cout << "------------- BEFORE MERGE SORT -------------\n";
    prog.printarr(A, n); // Fixed by calling printarr via the object

    prog.divide(A, 0, n - 1);

    cout << "------------- AFTER MERGE SORT -------------\n";
    prog.printarr(A, n);

    return 0;
}
