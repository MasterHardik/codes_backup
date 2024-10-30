#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int mid = (2 * n) - 1;
    for (int i = 0; i < mid; i++)
    {
        for (int j = 0; j < mid; j++)
        {
            if (i == mid / 2 && j == mid / 2)
            {
                cout << 1 << " ";
            }
            else if (i == 0 || i == (2 * n) - 2 || j == 0 || j == (2 * n) - 2)
            {
                cout << n << " ";
            }
            else
                cout << n / 2 << " ";
        }
        cout << endl;
    }
    return 0;
}

/* PATTERN
3
3 3 3 3 3
3 1 1 1 3
3 1 1 1 3
3 1 1 1 3
3 3 3 3 3

  7
7 7 7 7 7 7 7 7 7 7 7 7 7
7 3 3 3 3 3 3 3 3 3 3 3 7
7 3 3 3 3 3 3 3 3 3 3 3 7
7 3 3 3 3 3 3 3 3 3 3 3 7
7 3 3 3 3 3 3 3 3 3 3 3 7
7 3 3 3 3 3 3 3 3 3 3 3 7
7 3 3 3 3 3 1 3 3 3 3 3 7
7 3 3 3 3 3 3 3 3 3 3 3 7
7 3 3 3 3 3 3 3 3 3 3 3 7
7 3 3 3 3 3 3 3 3 3 3 3 7
7 3 3 3 3 3 3 3 3 3 3 3 7
7 3 3 3 3 3 3 3 3 3 3 3 7
7 7 7 7 7 7 7 7 7 7 7 7 7
 */
