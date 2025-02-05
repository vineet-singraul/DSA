// the constent value can not be count in memory beacuse its one time it will be neglect 
#include <iostream>
using namespace std;
class top
{
    public:
    void InsertionSort(int arr[] , int s)
    {
        for(int i = 1 ; i<s ; i++)
        {
            int chotu = i;
            while(chotu>0 && arr[chotu]<arr[chotu-1])
            {
                int temp;
                temp = arr[chotu-1];
                arr[chotu-1] = arr[chotu];
                arr[chotu] = temp;
                chotu--;
            }
        }

    }

};

int main()
{
    top p;
    int a[] = {4,5,6,7,3};
    int s = sizeof(a) / sizeof(a[0]);
    for(int i = 0 ; i < s ; i++)
    {
        cout<<a[i]<<"\t";
    }
    p.InsertionSort(a,s);
    cout<<"\n After Appliying : \n";

    for(int i=0 ; i<s ; i++)
    {
        cout<<a[i]<<"\t";
    }

}







// Spcce Complecity ---> yadi code me koi 