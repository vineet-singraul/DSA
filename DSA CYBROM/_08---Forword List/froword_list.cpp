// FOR INSERTING THE DATA DYNAMICALLY IN LINK_LIST

// #include <iostream>
// #include <forward_list>
// using namespace std;
// int main() {
//     forward_list<int> f;
//     int n, value;

//     cout << "Enter the number of elements to insert: ";
//     cin >> n;

//     cout << "Enter " << n << " elements:" << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> value;
//         f.push_front(value);  
//     }

//     cout << "Elements in the forward_list: ";
//     for (auto v : f) {
//         cout << v << " ";
//     }
// }






// fOR PERFOREMDD DELETION IN LINK-LIST
// #include <iostream>
// #include <forward_list>
// using namespace std;
// int main() {
//     forward_list<int> f;
//     int n, value;

//     cout << "Enter the number of elements to insert: ";
//     cin >> n;

//     cout << "Enter " << n << " elements:" << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> value;
//         f.push_front(value);  
//     }

//     f.pop_front();
//     cout << "Elements in the forward list: ";
//     for (auto v : f) {
//         cout << v << " ";
//     }

    
// }







// FOR FIND UNIQ VALUE IN ARRAY :

// #include <iostream>
// #include <forward_list>
// using namespace std;
// int main() {
//     forward_list<int> f;
//     int n, value;

//     cout << "Enter the number of elements to insert: ";
//     cin >> n;

//     cout << "Enter " << n << " elements:" << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> value;
//         f.push_front(value);  
//     }

//     f.sort();
//     f.unique();
//     cout << "Elements in the forward_list: ";
//     for (auto v : f) {
//         cout << v << " ";
//     }
// }





















#include <iostream>
#include <forward_list>

using namespace std;

int main() {
    forward_list<int> f;
    forward_list<int> f1;
    int n, value, n1, value1;

    // Input for first list
    cout << "Enter the number of elements to insert in List One: ";
    cin >> n;

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> value;
        f.push_front(value);
    }

    // Sorting first list before displaying
    f.sort();

    // Display first list
    cout << "List One data: " << endl;
    for (auto v : f) {
        cout << v << "\t";
    }
    cout << endl;
    cout << "-----------------------------" << endl;

    // Input for second list
    cout << "Enter the number of elements to insert in List Two: ";
    cin >> n1;

    cout << "Enter " << n1 << " elements:" << endl;
    for (int i = 0; i < n1; i++) {
        cin >> value1;
        f1.push_front(value1);
    }

    // Sorting second list before displaying
    f1.sort();

    // Display second list
    cout << "List Two data: " << endl;
    for (auto v1 : f1) {
        cout << v1 << "\t";
    }
    cout << endl;

    // Merging two lists
    f.merge(f1);

    // Display merged list
    cout << "Merged List: ";
    for (auto v : f) {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}
