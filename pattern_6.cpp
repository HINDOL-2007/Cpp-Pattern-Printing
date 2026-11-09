#include <iostream>
using namespace std;
// Pattern ---> 6
// 1
// 12
// 123
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
            cout << j + 1;
        }
        cout << endl;
    }
    return 0;
}