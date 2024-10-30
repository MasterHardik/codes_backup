#include <bits/stdc++.h>
using namespace std;

int mtx[3][5] = {
    {5, 4, 3, 6, 2},
    {9, 6, 8, 4, 3},
    {5, 4, 3, 6, 2}};

bool isInsideMatrix(int x, int y, int n, int m)
{
    return ((x >= 0 && x < n) && (y >= 0 && y < m));
}

void mover(int pos1, int pos2)
{
    for (int i = -1; i < 2; i++)
    {
        for (int j = -1; j < 2; j++)
        {
            if (isInsideMatrix(pos1 + i, pos2 + j, 3, 5))
            {
                if (!(i == 0 && j == 0))
                {
                    cout << mtx[pos1 + i][pos2 + j] << " ";
                }
            }
        }
    }
}

int main()
{
    mover(1, 1);
    return 0;
}

/*

     (-1,-1) (-1,0) (-1,+1)
             \  |  /
              \ | /
     (0,-1)---- x ----(0,+1)
              / | \
             /  |  \
     (+1,-1) (+1,0) (+1,+1)


*/