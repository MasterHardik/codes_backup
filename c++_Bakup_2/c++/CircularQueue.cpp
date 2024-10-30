#include <bits/stdc++.h>
using namespace std;

//  MYyCircularQueue class implementation

class MyCircularQueue
{
public:
    int maxSize, currSize;
    struct MyQueue
    {
        int val;
        MyQueue *next;
        MyQueue *prev;
        MyQueue(int x) : val(x), next(NULL), prev(NULL) {}
    };

    MyQueue *head, *tail, *temp;

    MyCircularQueue(int k)
    {
        maxSize = k;
        currSize = 0;
    }

    bool enQueue(int value)
    {
        if (currSize == maxSize)
            return false;
        if (currSize == 0)
        {
            head = new MyQueue(value);
            tail = head;
            currSize++;
            return true;
        }
        temp = new MyQueue(value);
        temp->next = head;
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
        currSize++;
        return true;
    }

    bool deQueue()
    {
        if (currSize == 0)
            return false;
        head = head->next;
        currSize--;
        return true;
    }

    int Front()
    {
        if (currSize == 0)
            return -1;
        return head->val;
    }

    int Rear()
    {
        if (currSize == 0)
            return -1;
        return tail->val;
    }

    bool isEmpty()
    {
        return currSize == 0;
    }

    bool isFull()
    {
        return currSize == maxSize;
    }
};

// class demo
// {
// public:
//     void showDemo()
//     {
//         cout << "Demo runnning ";
//     }
// };
int main()
{
    MyCircularQueue m1(1);
    // cout << m1.enQueue(4);
    cout << m1.isEmpty();
    // demo d1;
    // d1.showDemo();
    return 0;
}