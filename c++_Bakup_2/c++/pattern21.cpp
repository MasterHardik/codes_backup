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
        c++;
        for (int k = 0; k <= i; k++)
        {
            cout << " ";
        }
        cout << c << " ";
        c++;
        for (int l = 0; l <= i; l++)
        {
            cout << " ";
        }
        cout << c << " ";
        c++;
        for (int m = 0; m <= i; m++)
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
   A  B  C  D
  E   F   G   H
   I    J    K    L
    M     N     O     P
     Q      R      S      T
      U       V       W       X
 */