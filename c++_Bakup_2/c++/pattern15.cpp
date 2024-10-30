#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || (j == n - i))
            {
                cout << 7 << " ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}

/* PATTERN
 *
 *  7 7 7 7 7 7 7
 *            7
 *          7
 *        7
 *      7
 *   7
 * 7
 */