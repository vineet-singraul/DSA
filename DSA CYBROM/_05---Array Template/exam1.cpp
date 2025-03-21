#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
    // for function 
    array<int , 5>ob{10,8,4,3,1};   // We can use also for in int and more 
    // array<char , 5>ob2{'A','B','C','D','E'};  // Also For The char , float ,doble

    
    // for(auto p:ob2)
    // {
    //     cout<<p<<" ";
    // }
    // cout<<endl;



    // Frot data lane ke liye
    // cout<<"Starting Data : "<<ob.front()<<endl;
    // cout<<"Endining Data : "<<ob.back()<<endl;


    // For Making Accending Order
    sort(ob.begin() , ob.end());
    for (auto  k:ob)
    {
        cout<<k<<"\t";
    }
    cout<<endl;
    cout << "Second highest element: " << ob[3] << endl;


}