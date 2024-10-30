#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i == n / 2)
        {
            for (int i = 0; i < n; i++)
            {

                cout << "* ";
            }
        }
        else
        {
            if (i < n / 2)
            {

                for (int j = 0; j < n / 2 + i; j++)
                {
                    cout << "  ";
                }
                cout << "*";
            }
            else
            {
                for (int j = 0; j <= (n - i); j++)
                {
                    cout << "  ";
                }
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}

/* PATTERN

      *
        *
          *
* * * * * * *
*
  *
    *

 */