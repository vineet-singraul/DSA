#include <iostream>
using namespace std;
class top
{
    public:
    int c = 0;
    bool f = true;
    void bubble(int arr[] , int s)
    {
        for(int i =0 ; i<5 ; i++)
        {
            for(int j = 0; j < 5 -i -1 ; j++)
            {
                c++;
                if(arr[j] > arr[j+1])
                {
                    int temp;
                    temp = arr[j+1];
                    arr[j+1] = arr[j];
                    arr[j] = temp;
                    f = false;

                }
            }
            if(f == true)
            {
               break;
            }
        }
        cout<<endl<<"Counter Is : "<<c;
    }
};

int main()
{
    top p;
    // int a[] = {5,4,3,2,1};
    int a[] = {1,2,3,4,5};
    int s = sizeof(a) / sizeof(a[0]);
    for(int i = 0 ; i < s ; i++)
    {
        cout<<a[i]<<"\t";
    }
    p.bubble(a,s);
    cout<<"\n After Appliying : \n";

    for(int i=0 ; i<s ; i++)
    {
        cout<<a[i]<<"\t";
    }

}







// Spcce Complecity ---> yadi code me koi 