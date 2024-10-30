#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.assign(5, 2); // 5 times  2
    // v.push_back(10);
    // v.push_back(9);

    // now if we wanna to add in middle
    v.insert(v.begin() + 3, -3);
    v.erase(v.begin() + 2);

    //****way 1****//
    // for (auto itr : v)
    // {
    //     cout << itr << " ";
    // }

    //****way 2****//
    for (auto itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << " ";
    }

    //****way 3****//
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // cout << "Vector  is empty or not ? " << v.empty();
    // cout << "Maximum number of element that can be stored in vector  :" << v.max_size();

    cout << endl;
    vector<int> v1, v2;
    v1.push_back(21);
    v1.push_back(-2);
    v2.push_back(90);
    v2.push_back(11);
    v2.push_back(8);
    v1.swap(v2);

    // v1.clear();
    v2.clear();

    for (auto itr = v1.begin(); itr != v1.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
    for (auto itr = v2.begin(); itr != v2.end(); itr++)
    {
        cout << *itr << " ";
    }
    return 0;
}