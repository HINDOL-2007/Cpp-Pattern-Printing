#include <iostream>
using namespace std;
// Pattern ---> 10
//     1
//    121
//   12321
//  1234321
// ........
int main()
{
    int n;
    cout << "Enter How many line you want :- ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i - 1; j > 0; j--)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}