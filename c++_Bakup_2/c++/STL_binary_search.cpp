#include <bits/stdc++.h>
using namespace std;

void show(int a[], int asize)
{
    for (int i = 0; i < asize; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{

    int a[] = {2, 3, 0, 9, 5, 6, 8, 1, 4};
    int size = sizeof(a) / sizeof(a[0]);

    show(a, size);

    cout << "array after sorting : " << endl;
    sort(a, a + size);
    show(a, size);

    if (binary_search(a, a + size, 8))
    {
        cout << "Yes our element is present in the array " << endl;
    }
    else
        cout << "No our element is presnet in the array " << endl;
    return 0;
}