#include <iostream>
using namespace std;

void printInc(int n)
{
    if (n == 1)
    {
        cout << 1 << " ";
        return;
    }
    printInc(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;
    printInc(n);
    return 0;
}