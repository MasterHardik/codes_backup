#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric> //for using accumulate
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(10);
    v.push_back(7);
    v.pop_back();
    // using iterator
    vector<int>::iterator it;
    it = v.begin();
    cout << "Itereator" << *it << endl;
    ;
    for (auto x : v)
    {
        cout << x << endl;
    }
    // size function
    int size = (int)v.size();
    cout << "size of vector is :" << size << endl;
    // using auto and begin
    auto a = v.begin();
    cout << "The begining elem of vector is : " << a[0];
    v.push_back(5);
    v.push_back(2);
    v.push_back(4);
    cout << "Sorted in ascending order  :" << endl;
    // sort fu
    sort(v.begin(), v.end());
    for (auto x : v)
    {
        cout << x << endl;
    }
    cout << "Sorted in descending order  :" << endl;
    //  reverse funciton
    reverse(v.begin(), v.end());
    for (auto x : v)
    {
        cout << x << endl;
    }
    // max element in vector build in fu
    cout << "Maximum element is : " << *max_element(v.begin(), v.end()) << endl;
    // min element
    int x = *min_element(v.begin(), v.end());
    cout << "Minimum element is : " << x << endl;
    // accumulate;
    cout << "Accumulate :" << endl;
    cout << accumulate(v.begin(), v.end(), 0) << endl;

    // or using variable sum
    int sum = 0;
    sum = accumulate(v.begin(), v.end(), sum);
    cout << "Sum using var sum :" << sum << endl;
    return 0;
}