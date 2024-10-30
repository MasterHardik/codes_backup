#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t = n - i;
        for (int j = 0; j <= i; j++)
        {
            cout << t << " ";
            t++;
        }
        cout << endl;
    }
    return 0;
}

/* PATTERN
 *  5
 *  4 5
 *  3 4 5
 *  2 3 4 5
 *  1 2 3 4 5
 */