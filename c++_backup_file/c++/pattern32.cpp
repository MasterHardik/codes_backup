#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i == 0 && j != 0 && j != n - 1) || (i == n - 1 && j != 0 && j != n - 1) || (j == 0 && i >= 1 && i < n - 1) || (j == n - 1 && i >= 1 && i < n - 1))
            {
                cout << "1 ";
            }
            else
                cout << "0 ";
        }
        cout << endl;
    }
    return 0;
}

/* PATTERN
    0 1 1 1 0
    1 0 0 0 1
    1 0 0 0 1
    1 0 0 0 1
    0 1 1 1 0
 */