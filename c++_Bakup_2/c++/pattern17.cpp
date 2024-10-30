#include <iostream>

using namespace std;
int main()
{
    int n;
    char c{'A'};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "   ";
        }
        for (int k = 0; k <= i; k++)
        {
            if (i % 2 != 0)
                cout << " 0 ";
            else
                cout << " " << c << " ";
        }
        c++;
        cout << endl;
    }
    return 0;
}

/* PATTERN
                      A
                   0  0
                C  C  C
             0  0  0  0
          E  E  E  E  E
       0  0  0  0  0  0
    G  G  G  G  G  G  G
 */