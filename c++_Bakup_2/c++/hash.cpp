#include <iostream>
using namespace std;
#define MAX 1000

bool hashTable[MAX + 1][2]; // The benifit of declaring globally is that by default values 0;

bool search(int x)
{
    if (x >= 0)
    {
        if (hashTable[x][0] == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        x = abs(x);
        if (hashTable[x][1] == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

void insert(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            hashTable[a[i]][0] = 1;
        }
        else
        {
            hashTable[abs(a[i])][1] = 1;
        }
    }
}

int main()
{
    int arr[] = {-1, 9, 2, -5, 3, 1};
    int n = sizeof(arr) / sizeof(int);
    insert(arr, n);
    cout << "Enter element you wanna find in the  HashTable : ";
    int find;
    cin >> find;
    // int find = -2;
    if (search(find))
    {
        cout << "Element is present" << endl;
    }
    else
    {
        cout << "element is not present " << endl;
    }

    // // printing all the elements of the hash table
    // for (int i = 0; i <= 1; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << hashTable[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}
