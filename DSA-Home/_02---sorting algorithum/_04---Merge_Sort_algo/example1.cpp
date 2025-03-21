#include <iostream>
using namespace std;

void Merge(int A[], int low, int mid, int high) {
    int i = low, j = mid + 1, k = 0;
    int *B = new int[high - low + 1]; 

    while (i <= mid && j <= high) {
        if (A[i] < A[j]) {
            B[k++] = A[i++];
        } else {
            B[k++] = A[j++];
        }
    }

    while (i <= mid) {
        B[k++] = A[i++];
    }

    while (j <= high) {
        B[k++] = A[j++];
    }

    for (i = low, k = 0; i <= high; i++, k++) {
        A[i] = B[k];
    }

    delete[] B;
}

void Divide(int A[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        Divide(A, low, mid);
        Divide(A, mid + 1, high);
        Merge(A, low, mid, high);
    }
}

void PrintArr(int A[], int s) {
    for (int i = 0; i < s; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() {
    int A[] = {5, 4, 3, 1, 2};
    int s = sizeof(A) / sizeof(A[0]);

    cout << "---- Before Sorting Array -----" << endl;
    PrintArr(A, s);

    Divide(A, 0, s - 1);

    cout << "---- After Sorting Array -----" << endl;
    PrintArr(A, s);
}
