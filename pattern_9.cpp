#include <iostream>
using namespace std;
// Pattern ---> 9
// AAAA
//  BBB
//   CC
//    D
// ........
int main()
{
    int n;
    cout << "Enter How many line you want :- ";
    cin >> n;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << ch;
        }
        ch++;
        cout << endl;
    }
    return 0;
}