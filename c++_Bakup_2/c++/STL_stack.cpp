#include <iostream>
#include <stack>
using namespace std;

// void print_stack_element(stack<char> temp)
// {
//     while (!temp.empty())
//     {
//         cout << temp.top() << endl;
//         temp.pop();
//     }
// }

int main()
{
    stack<int> s;
    stack<char> c;
    // cout << "Size of stack is : " << s.size() << endl;
    // cout << "Stack is empty   : " << s.empty() << endl;
    // cout << "Element 1 pushed !!" << endl;
    // s.push(1);
    // cout << "Element 2 pushed !!" << endl;
    // s.push(2);
    // cout << "Element at the top of stack is : " << s.top() << endl;
    // cout << "Element poped !!" << endl;
    // s.pop();
    // cout << "Element at the top of stack is : " << s.top() << endl;
    // cout << "Element poped !!" << endl;
    // s.pop();
    // cout << "Element at the top of stack is : " << s.top() << endl;

    c.push('a');
    c.push('b');
    c.push('d');
    cout << c.top() << endl;
    // print_stack_element(c);

    return 0;
}