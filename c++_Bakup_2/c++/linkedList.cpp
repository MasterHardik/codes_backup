#include <iostream>
using namespace std;
struct node
{
    int data;
    int *next;
};

int main()
{
    struct node n1;
    n1.data = 45;
    cout << "dsfh";
    int *head = &n1.data;

    return 0;
}