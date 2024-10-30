#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            for (int j = 0; j < n; j++)
            {
                cout << j + 1 << " ";
            }
        }
        else
        {
            for (int j = 0; j <= (n / 2) - i + 1; j++)
            {
                cout << " ";
            }
            cout << 1;
            if (i == 0)
            {
                cout << " " << endl;
            }
            else
            { // for printing the middle spaces
                for (int l = 1; l <= 2 * i - 1; l++)
                {
                    cout << " ";
                }
                cout << i + 1 << endl;
            }
        }
    }
    return 0;
}

/*
    1
   1 2
  1   3
 1     4
1 2 3 4 5
 */