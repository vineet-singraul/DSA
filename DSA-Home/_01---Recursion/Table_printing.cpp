#include <iostream>
using namespace std;

void TablePrint(int tab ,int start = 1)
{
   if(start > 10)
   {
      return;
   }

   cout<< tab <<" * "<<start<<" = "<< tab*start <<endl;
   return TablePrint(tab,start+1);
}


int main()
{
    int tab , start;
    cout<<"Enter The Tale To print : ";
    cin>>tab;
    TablePrint(tab);
}