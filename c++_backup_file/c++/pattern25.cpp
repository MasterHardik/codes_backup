#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int mid = (2 * n) - 1;
    for (int i = 0; i <= mid; i++)
    {
        for (int j = 1; j <= mid; j++)
        {
            if (i == mid / 2 && j == mid / 2)
            {
                cout << 1 << "  ";
            }
            else if (i == 0 || i == n || j == 0 || j == n)
            {
                cout << n << " ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}

/* PATTERN
 4 4 4 4 4 4 4
      4
      4
    1  4
4 4 4 4 4 4 4
      4
      4
      4
 */
