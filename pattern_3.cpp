#include <iostream>
using namespace std;
// Pattern ---> 3
// 1   2   3
// 4   5   6
// 7   8   9
// ........

int main()
{
    int n, num = 1;
    cout << "Enter How many line you want :- ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << num << "    ";
            num++;
        }
        cout << endl;
    }
    return 0;
}