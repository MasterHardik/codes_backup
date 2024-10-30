#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < n - i; j++)
        {
            cout << "  ";
        }
        for (int k = n - i; k <= n; k++)
        {
            cout << (k * 2) - 1 << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
 *         9
 *       7 9
 *     5 7 9
 *   3 5 7 9
 * 1 3 5 7 9
 */