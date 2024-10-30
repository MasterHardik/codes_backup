#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(2);
    q.push(4);
    std::cout << "The element in front is : " << q.front() << endl;
    q.pop();
    std::cout << "The element in front is : " << q.front() << endl;
    q.pop();
    std::cout << "The element is Empty    : " << (q.empty() ? "YES" : "NO") << endl;
    q.pop();
    std::cout << "The element in back is  : " << q.back() << endl;
    std::cout << "The element in front is : " << q.front() << endl;
    return 0;
}
