#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    char c = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        cout << c << " ";
        for (int k = 0; k < 2 * (n - i) - 4; k++)
        {
            cout << " ";
        }
        if (i != n - 1)
        {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
    return 0;
}

/* PATTERN
    A       A
     B     B
      C   C
       D D
        E
 */