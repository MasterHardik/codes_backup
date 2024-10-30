#include <bits/stdc++.h>
using namespace std;
struct node
{
    int value;
    int *leftnode;
    int *rightnode;
};

int main()
{
    struct node root;
    root.value = 5;
    int *ptr = NULL; // 0;
    cout << ptr;
    // int *ptr; // this is a pointer which stores address
    // int a;
    // a = 9;
    // cout << &a << endl;
    // ptr = &a;
    // cout << ptr << endl;
    // cout << *(&a) << endl;  // 9
    // cout << *(ptr) << endl; // 9

    // // std::cerr << a << endl;
    // int *var = &a;
    // cout << &a << endl;
    // //ptr = &/
    // cout << var << endl;
    // // cout << &var << endl;
    // // cout << var << endl;

    return 0;
}
// 1-> 0001
// 2-> 0010
// 3-> 0011
// 56 -> 10110101010101010

// 0 9 8 7 6 5 4 3 2 1

// h  t   o

//     1  0     //number system : binary -> decimal
