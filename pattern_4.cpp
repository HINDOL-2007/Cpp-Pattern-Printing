#include <iostream>
using namespace std;
// Pattern ---> 4
// *
// **
// ***
// ........
int main()
{
    int n;
    cout << "Enter How many line you want :- ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}