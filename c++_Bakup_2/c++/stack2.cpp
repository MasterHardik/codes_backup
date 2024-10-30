#include <iostream>
#define Si 3
using namespace std;

int top{-1};
int Stack[Si];

void isEmpty()
{
    if (top == -1)
    {
        cout << "Stack isEmpty" << endl;
    }
    else
        cout << "Stack is not Empty" << endl;
}

void isFull()
{
    if (top == Si - 1)
    {
        cout << "Stack isFull" << endl;
    }
    else
        cout << "Stack not Empty" << endl;
}

void push(int x)
{
    if (top == Si - 1)
    {
        cout << "Stack is Full" << endl;
    }
    else
    {
        ++top;
        Stack[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << Stack[top] << endl;
        --top;
    }
}

void totalElem()
{
    cout << "\nTotal elemnt are :" << top + 1 << endl;
}

void Top()
{
    cout << "Stack top element  is : " << Stack[top] << endl;
}

int main()
{
    int n;
    cout << "Enter number of element to insert in stack :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        push(x);
    }

    totalElem();

    for (int i = 0; i < n; i++)
    {
        pop();
    }

    // // push('s');   //<-- push if char

    // totalElem();
    // isEmpty();
    // push(2);  //top 0
    // Top();
    // push(3); //top 1
    // push(4); //top 2
    // push(5);
    // totalElem();
    // pop(); // stack[2];  //top =2-->1
    // pop(); //stack[1];   //top =1-->0;
    // pop();//stack[0];    //top =0-->-1;
    // pop();//stack[-1];
    return 0;
}
