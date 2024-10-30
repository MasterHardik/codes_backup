#include <bits/stdc++.h>
using namespace std;

struct person
{
    string name;
    int marks;
};
struct node
{
    int data;
    int *next;
};

int main()
{
    // int a = 0;
    // a = 7;
    struct node *head = (struct node *)malloc(sizeof(struct node));

    struct node root, n2, n3;
    head = &root;
    // struct node n2;
    root.data = 3;
    // root.next = NULL;
    n2.data = 4;
    root.next = &n2.data;

    cout << root.data << "--->" << *(root.next);
    n3.data = 6;
    n3.next = NULL;

    // struct person p1;
    // p1.name = "Rahul the coder";
    // p1.marks = 100;

    // cout << "Name of person p1 :" << p1.name << endl;
    // cout << "Marks of person p1 :" << p1.marks << endl;

    // int a = 9;
    // int *ptr;
    // ptr = &a;
    // cout << *ptr;

    // int n;
    // cin >> n;
    // int arr[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cout << &arr[i] << " ";
    // };
    // cout << sizeof(arr);
    return 0;
}
