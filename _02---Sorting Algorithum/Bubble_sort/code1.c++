

#include <iostream>
using namespace std;

class Top
{
public:
    bool f;  

    void BubbleSort(int A[], int s)
    {
        for (int i = 0; i < s - 1; i++)
        {
            f = true; 
            for (int j = 0; j < s - i - 1; ++j)  
            {
                if (A[j] > A[j + 1])  
                {
                    int temp = A[j];
                    A[j] = A[j + 1];
                    A[j + 1] = temp;
                    f = false; 
                }
            }
            if (f) 
                break;
        }
    }
};

int main()
{
    Top prog1;
    int A[5];

    cout << "Enter array elements: ";
    for (int i = 0; i < 5; ++i)
    {
        cin >> A[i];
    }

    int s = sizeof(A) / sizeof(A[0]);

    prog1.BubbleSort(A, s);

    cout << "Sorted array: ";
    for (int j = 0; j < 5; ++j)
    {
        cout << A[j] << " ";
    }
    cout << endl;

    return 0;
}
