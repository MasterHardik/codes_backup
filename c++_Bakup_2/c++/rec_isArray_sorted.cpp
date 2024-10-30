#include <iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }
    bool restArray = isSorted(arr + 1, n - 1);
    return (arr[0] < arr[1] && restArray);
}

int main()
{
    int ar[5] = {2, 3, 4, 5, 6};
    cout << isSorted(ar, 5) << endl;
    return 0;
}