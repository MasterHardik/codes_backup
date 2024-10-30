#include <iostream>
using namespace std;
bool checkAlpha(char c)
{
    if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
    {
        return 1;
    }
    else
        return 0;
}

bool checkNum(char c)
{
    if (c >= 48 && c <= 57)
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    char c;
    cin >> c;
    if (checkAlpha(c))
    {
        cout << "It's an English letter" << endl;
    }
    else if (checkNum(c))
    {
        cout << "It's a number" << endl;
    }
    else
        cout << "It's a Special Character" << endl;
    return 0;
}