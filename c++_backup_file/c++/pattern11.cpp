#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int t = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << t << " ";
            t++;
        }
        cout << endl;
    }
    return 0;
}

/* Pattern
 *  1
 *  3 2
 *  4 5 6
 *  10 9 8 7
 *  11 12 13 14 15
 */