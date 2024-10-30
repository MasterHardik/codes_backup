#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int k = n - i; k < n; k++)
        {
            cout << i + j + 1;
        }
        cout << endl;
    }
    return 0;
}

/*
        2
       33
      444
     5555
    66666
   777777
  8888888
 99999999
 */