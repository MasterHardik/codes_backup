#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || j == (n - 1 - i))
            {
                cout << "1 ";
            }
            else
                cout << "0 ";
        }
        cout << endl;
    }
    return 0;
}

/*

1 0 0 0 1
0 1 0 1 0
0 0 1 0 0
0 1 0 1 0
1 0 0 0 1

*/