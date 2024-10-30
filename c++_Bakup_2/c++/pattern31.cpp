#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // upper
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            if (j == 0)
            {
                cout << "*";
            }
            else
            {
                cout << j;
            }
        }
        cout << "*" << endl;
    }
    // lower
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i; j++)
        {
            if (j == 0)
            {
                cout << "*";
            }
            else
            {
                cout << j;
            }
        }
        cout << "*" << endl;
    }
    return 0;
}

/* PATTERN


*
*1*
*121*
*12321*
*121*
*1*
*

*/