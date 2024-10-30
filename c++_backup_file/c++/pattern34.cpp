#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int k = 0; k < n; k++)
    {
        for (int j = 0; j < n + k; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - k - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

/*
   PATTERN
*
**
***
****
*****
     *****
      ****
       ***
        **
         *
 */