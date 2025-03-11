#include <iostream>
using namespace std;

class Stacks 
{
private:
    int *arr;
    int n, top;

public:
    Stacks(int s) 
    {
        n = s;
        arr = new int[n];
        top = -1;
    }


    void Pushs(int v)
    {
        if (top == n - 1)
        {
            cout << "Overflow\n";
            return;
        }
        top++;
        arr[top] = v;
    }

    int pops()
    {
        if (top == -1)
        {
            cout << "Underflow\n";
            return 0;
        }
        return arr[top--];
    }

    int tops()
    {
        if (top == -1)
        {
            cout << "No Element Found\n";
            return 0;
        }
        return arr[top];
    }
};

int main()
{
    int s, v;
    cout << "Enter the size of array: ";
    cin >> s;

    Stacks st(s);

    for (int i = 0; i < s; ++i)
    {
        cout << "Enter Element: ";
        cin >> v;
        st.Pushs(v);
    }

    cout << "Stack elements in LIFO order:\n";
    while (st.tops() != 0) 
    {
        cout << st.tops() << "\t";
        st.pops();
    }
}
