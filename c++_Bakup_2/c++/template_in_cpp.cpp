#include <bits/stdc++.h>
using namespace std;
// int add(int a, int b)
// {
//     return a + b;
// }
// template <class T>
template <typename T>
T MAX(T a, T b)
{
    return a > b ? a : b;
}

template <class Y>
class boy
{
public:
    Y name;
};
int main()
{
    auto x = MAX<int>(2, 4);
    auto y = MAX<double>(2.3234324, 4.42343432);
    auto z = MAX<char>('c', 'a');

    cout << endl;
    cout << "Using template in int data type    : " << x << endl;
    cout << "Using template in double data type : " << y << endl;
    cout << "Using template in char data type   : " << z << endl;

    boy<string> person;
    person.name = "Master@Hacker";
    cout << (person.name) << endl;
    // cout << add(7, 6);
    return 0;
}

/* TEMPLATE in cpp
 * -A template is a simple
 * yet very powerful tool in c++
 * -The simplest idea is to pass data
 *  as a parameter so that we don't
 * need tp write keywords to support templates
 *          ** 'Template' and 'typename'
 */