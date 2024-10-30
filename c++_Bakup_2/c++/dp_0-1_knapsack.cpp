#include <bits/stdc++.h>
using namespace std;
// Recursion -> memorization -> tabulation
//* we will first identify the base condition then make a choice diagram
int knapsack(int wt[], int val[], int w, int n)
{
    // first of all base condition
    if (n == 0 || n == 0)
    {
        return 0;
    }

    // choice diagram condition

    if (wt[n - 1] <= w)
    {
        return max(val[n - 1] + knapsack(wt, val, w - wt[n - 1], n - 1), knapsack(wt, val, w, n - 1));
    }
    else if (wt[n - 1] > w)
    {
        return knapsack(wt, val, w, n - 1);
    }
}

int main()
{
    int n = 3;              // size of sample or number if items
    int wt[n] = {5, 3, 6};  // weight of items
    int val[n] = {3, 4, 5}; // value of respective weight items
    int w = 10;             // maximum capacity of bag

    cout << "Maximum Profit : " << knapsack(wt, val, w, n);
    return 0;
}