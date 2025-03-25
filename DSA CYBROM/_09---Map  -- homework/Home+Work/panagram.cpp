#include<iostream>
#include<unordered_set>
using namespace std;
class Panagram
{
    public:
    bool Checkpanagram(string ch)
    {
        unordered_set<char> latters;
        for(auto c : ch)
        {
            if(c >= 'a' && c <='z')
            {
                latters.insert(c);
            }
        }
        return latters.size() == 26; 
    }
};

int main()
{
    Panagram obj1;
    string ch = "The quick brown fox jumps over the lazy dog";
    bool f = obj1.Checkpanagram(ch);

    if(f)
    {
        cout<<"Panagram : ";
    }
    else{
        cout<<"not Panagram :";
    }
}