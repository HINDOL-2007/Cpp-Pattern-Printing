#include <iostream>
using namespace std;
// Pattern ---> 1
// *****
// *****
// *****
// *****
// *****
// ........

int main()
{
    int n = 5;
    cout << "Enter How many line you want :- ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}