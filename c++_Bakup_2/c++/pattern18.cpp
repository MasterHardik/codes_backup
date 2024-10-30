#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char c = 'A';
        for (int j = 0; j < i; j++) //<--- thsi pattern will be changed to new as we type n-i
        {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
    return 0;
}

/* PATTERN
    A
    A B
    A B C
    A B C D
    A B C D E
 */