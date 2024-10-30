
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " ";
        for (int j = 0; j <= i; j++)
        {
            if (i > 0)
            {
                cout << "0 ";
            }
            if (j == i)
            {
                cout << i + 1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

/*
   PATTERN
1
2 0 2
3 0 0 0 3
4 0 0 0 0 4
5 0 0 0 0 0 5
 */