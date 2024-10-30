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
        for (int k = 0; k < n - (2 * i); k++)
        {
            cout << " ";
        }
        cout << c << " ";
        c++;
        cout << endl;
    }
    return 0;
}

/* PATTERN
 A          A
  B        B
   C      C
    D    D
     E  E
      F F
       G G
        H H
         I I
 */