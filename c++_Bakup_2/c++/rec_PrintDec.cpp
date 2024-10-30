#include <iostream>
using namespace std;

void printInc(int n)
{
    cout << n << " ";
    if (n == 1)
    {
        return;
    }
    printInc(n - 1);
}

int main()
{
    int n;
    cin >> n;
    printInc(n);
    return 0;
}