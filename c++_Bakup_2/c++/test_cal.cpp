#include <bits/stdc++.h>
using namespace std;

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return abs(a - b);
}
int mul(int a, int b)
{
    return a * b;
}
int quot(int a, int b)
{
    return a / b;
}

void calculator()
{
    cout << "\t        +------------------------+" << endl;
    cout << "\t        |** This is Calculator **|\t" << endl;
    cout << "\t        +------------------------+";
    cout << "\n\n";
    cout << "================================================================" << endl;
    cout << "1. Add      + ";
    cout << "\t";
    cout << "2. Subtract - ";
    cout << "\t";
    cout << "3. Multiply * ";
    cout << "\t";
    cout << "4. Divide   / \n";
    cout << "================================================================" << endl;
    cout << "Enter your choice : ";
    int choice;
    cin >> choice;
    cout << "\nEnter Two numbers  :";
    int a, b;
    cin >> a >> b;
    cout << endl;
    cout << "****************************************************************" << endl;
    switch (choice)
    {
    case 1:
        cout << "Sum of " << a << " and " << b << " is " << add(a, b);
        break;
    case 2:
        cout << "Difference of " << a << " and " << b << " is " << sub(a, b);
        break;
    case 3:
        cout << "Product of " << a << " and " << b << " is " << mul(a, b);
        break;
    case 4:
        cout << "Quotient of " << a << " and " << b << " is " << quot(a, b);
        break;

    default:
        break;
    }
    cout << "\n****************************************************************" << endl;
}

int main()
{
    calculator(); // calculator function called
    return 0;
}