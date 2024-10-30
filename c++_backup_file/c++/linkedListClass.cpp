#include <bits/stdc++.h>
// #include <iostream>
// #include <stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head = (struct node *)malloc(sizeof(struct node));
class ll
{
public:
    void createNinsert(int x)
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        struct node *nn = (struct node *)malloc(sizeof(struct node));
        nn->data = x;
        nn->next = NULL;
        while (temp != NULL)
        {
            temp = temp->next;
        }
        temp->next = nn;
    }
    void display()
    {
        struct node *p = (struct node *)malloc(sizeof(struct node));
        p = head;
        while (p != NULL)
        {
            cout << p->data << "->";
            p = p->next;
        }
        cout << p->data;
        cout << "NULL" << endl;
    }
};

int main()
{
    int n;
    cout << "number of node you wanna insert : ";
    cin >> n;
    cout << "Enter the nodes data/value : ";
    int t;
    cin >> t;
    if (head == NULL)
    {
        cout << "Can't allocate the memory!!" << endl;
    }
    else
    {
        ll l;
        struct node n1 = (struct node)n1;
        head = &n1;
        head->data = t;
        head->next = NULL;
        for (int i = 1; i < n; i++)
        {
            cin >> t;
            l.createNinsert(t);
        }
        l.display();
    }

    return 0;
}