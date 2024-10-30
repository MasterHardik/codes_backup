// #include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[10] = {2, 4, 7, 3, 8, 4, 7, 2, 4, 9};
    sort(arr, arr + 10);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}

/*  STL -Standard template library  */

/*
 *  STL is a c++ template Library
 *  It provide common programming data structures and functions
 * Now Sata Structures are like stacks , Queues etc.
 * Now Algorithms are Sorting, Searching etc.
 */

/*   Components of STL
 * - Algorithms   --->   Sorting Searching
 *  - Containers  --->   Vectors Stack Queue
 *  - Functions
 *  - Itereators  --->   Like a  pointers
 *                           But points the
 *                             address of STL Containers.
 */