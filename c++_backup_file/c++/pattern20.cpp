#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, t{1};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // for (int j = 0; j < n - i; j++)
        // {
        // }
        cout << pow(11, i);
        cout << endl;
    }
    return 0;
}

/* PATTERN5

    1
    1 1
    1 2 1
    1 3 3 1
    1 4 6 4 1
 */