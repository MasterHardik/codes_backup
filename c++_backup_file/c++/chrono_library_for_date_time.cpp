#include <iostream>
#include <chrono>
using namespace std;
int main()
{
    using namespace std::chrono;
    // chrono::milliseconds is an instantiation of std::chrono::duration milliseconds mili(1000);
    mili = mili * 60;
    cout << "Duration : ";
    cout << mili.count() << " milliseconds.\n";
    cout << "Duration : ";
    cout << (mili.count() * milliseconds::period::num / milliseconds::period::den);
    cout << " seconds.\n";
}

// reference java t point chrono library