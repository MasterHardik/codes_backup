#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            char c = 'A';
            if (i % 2 != 0)
            {
                cout << j + 1 << " ";
            }
            else
                cout << static_cast<char>(c + j) << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
   1
   A B
   1 2 3
   A B C D
   1 2 3 4 5
 */