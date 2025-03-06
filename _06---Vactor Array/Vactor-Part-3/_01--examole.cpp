#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> v1;
    int row, col, v;

    cout << "Enter A No Of Rows: ";
    cin >> row;
    cout << "Enter A No Of Columns: ";
    cin >> col;


    for (int i = 0; i < row; i++)
    {
        vector<int> v2;
        for (int j = 0; j < col; j++)
        {
            cout << "Enter A Value: ";
            cin >> v;
            v2.push_back(v);
        }
        v1.push_back(v2);
    }

    cout << "--------------------------------" << endl;

    // Display Vector Value :
    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = 0; j < v1[i].size(); j++)
        {
            cout << v1[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
