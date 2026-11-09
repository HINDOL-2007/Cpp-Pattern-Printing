#include <iostream>
using namespace std;
// Pattern ---> 7
// A
// B A
// C B A
// ........
int main()
{
    int n;
    cout << "Enter How many line you want :- ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        ch = ch + i ;
        for (int j = i+1; j > 0 ; j--)
        {
            cout << ch <<" ";
            ch--;
        }
        cout << endl;
    }
    return 0;
}