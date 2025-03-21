#include <iostream>
using namespace std;

int SumOfNumber(int Num)
{
   if(Num == 1)
   {
     return 1;
   }

   return Num + SumOfNumber(Num-1);
}

int main()
{
    int Num;
    cout<<"Enter The Number : ";
    cin>>Num;
    int res = SumOfNumber(Num);
    cout<<"The Total Sum Of All Numbers : "<<res;
}