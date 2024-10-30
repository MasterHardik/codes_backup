#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t = i;
        for (int j = 0; j < n; j++)
        {
            if (t == n)
            {
                t = 0;
                cout << t + 1 << " ";
                t++;
            }
            else
            {
                cout << t + 1 << " ";
                t++;
            }
        }
        cout << endl;
    }
    return 0;
}

/* PATTERN
 *  1 2 3 4
 *  2 3 4 1
 *  3 4 1 2
 *  4 1 2 3
 */