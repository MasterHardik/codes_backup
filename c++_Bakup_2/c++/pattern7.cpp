#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1)
            {
                cout << i + j - 1 << " ";
            }
            else if ((i + j) == n + 1)
            {
                cout << n;
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}

/*
 *      1 2 3 4 5
 *      2     5
 *      3   5
 *      4 5
 *      5
 */