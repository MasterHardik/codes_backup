#include <iostream>
using namespace std;

bool isInsideMatrix(int x, int y, int n, int m)
{
    return ((x >= 0 && x < n) && (y >= 0 && y < m));
}

int main()
{
    int n, m;
    int matrix[n][m];
    cout << "Enter size of the Matrix  : ";
    cin >> n >> m;
    cout << "Enter elements of Matrix  : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
}
