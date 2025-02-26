#include <iostream>
using namespace std;
class top
{

public:
  void SelectionSort(int arr[] , int s)
  {
      for(int i=0 ; i<5 ; i++)
      {
        int chotu = i;
        for(int j=i+1 ; j<s ; j++)
        {
            chotu = j;
        }
        if(chotu != i)
        {
            int temp;
            temp = arr[i];
            arr[i] = arr[chotu];
            arr[chotu] = temp;
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
    p.SelectionSort(a,s);
    cout<<"\n After Appliying : \n";

    for(int i=0 ; i<s ; i++)
    {
        cout<<a[i]<<"\t";
    }

}


