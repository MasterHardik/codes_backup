#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t = 69 - i;
        for (int j = 0; j <= i; j++)
        {
            cout << static_cast<char>(t) << " ";
            t++;
        }
        // char c = 'E';
        // cout << "-->" << static_cast<int>(c);
        cout << endl;
    }
    return 0;
}

/* PATTERN
 *
 *  E
 *  D E
 *  C D E
 *  B C D E
 *  A B C D E
 */