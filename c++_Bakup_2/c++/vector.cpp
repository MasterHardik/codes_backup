#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric> //for using accumulator
using namespace std;

void show(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(-2);
    v.push_back(6);
    v.push_back(13);
    show(v);
    cout << "\nafter sorting :" << endl;
    sort(v.begin(), v.end());
    show(v);
    cout << "\nafter reverse :" << endl;
    reverse(v.begin(), v.end());
    show(v);

    cout << "\nMaximum element is : " << *max_element(v.begin(), v.end());
    cout << "\nMinimum element is : " << *min_element(v.begin(), v.end());

    cout << "\nAccumulate sum as  : " << accumulate(v.begin(), v.end(), 0);
    int sum = 0;
    sum = accumulate(v.begin(), v.end(), sum);
    cout << "\nsum is : " << sum;

    return 0;
}