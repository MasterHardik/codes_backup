#include <iostream>
#include <stdlib.h>
// #include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *link;
};
// struct node *ptr;
struct node *head = (struct node *)malloc(sizeof(struct node));
struct node *ptr = (struct node *)malloc(sizeof(struct node));
class ll
{
public:
    void insert(int elem)
    {
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = elem;
        newNode->link = NULL;
        ptr = head;
        while (ptr->link != NULL)
        {
            ptr = ptr->link;
        }
        ptr->link = newNode;
    }
    void displayLL()
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp = head;
        while (temp->link != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->link;
        }
        cout << temp->data << " -> ";
        cout << "NULL";
    }
    void insertIN(int pos, int elem)
    {
        struct node ne;
        ne.data = elem;
        struct node *p = (struct node *)malloc(sizeof(struct node));
        p = head;
        int i = 1;
        while (i != pos - 1)
        {
            p = p->link;
            i++;
        }
        ne.link = p->link;
        p->link = &ne;
    }
};

int main()
{
    int n;
    cout << "Enter size of linked list  :";
    cin >> n;
    ll l;
    int elem;
    cin >> elem;
    if (head == NULL)
    {
        cout << "Can't allocate the memeory !!" << endl;
        return 0;
    }
    else
    {
        head->data = elem;
        head->link = NULL;
        for (int i = 2; i <= n; i++)
        {
            cin >> elem;
            l.insert(elem);
        }
    }
    l.displayLL();
    cout << "\nEnter position and element you wanna to insert  :";
    int po, e;
    cin >> po >> e;
    l.insertIN(po, e);
    l.displayLL();
    return 0;
}