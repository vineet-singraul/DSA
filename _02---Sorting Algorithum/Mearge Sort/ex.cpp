#include <iostream>
using namespace std;
void mearges(int A[] , int low ,int mid , int heigh)
{
    int i , j , k , B[heigh+1];
    i = low;
    j = mid+1;
    k =low;

    while(i<=mid && j<=heigh)
    {
        if(A[i] < A[j])
        {
            B[k] = A[i];
            i++;
        }
        else{
            B[k] = A[i];
            k++;
            i++;
        }


       while(j <= heigh)
       {
        B[k] = A[j];
        k++;
        j++;
       }

       for(i=low ; i<=heigh ; i++)
       {
        A[i] = B[i];
       }
    }

    void divide(int A[] , int low , int heigh)
    {
        int mid;
        if(low < heigh)
        {
            mid = (low + heigh) / 2;
            divide(A,low,mid);
            divide(A,mid+1,heigh);
            mearges(A,low,mid,heigh);
        }
    }

    void printarr(int A[] , int n)
    {
        int i;
        for(i =0 ; i<n ; i++)
        {
            cout<<A[i]<<"\t";
        }
        cout<<"\n";
    }a

}


int main()
{
    int A[] = {3,5,6,8,4,5,7,6,3};
    int n = sizeof(A) / sizeof(A[0]);
    pri
}