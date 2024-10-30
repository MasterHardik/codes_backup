#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    // s.insert(2);

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << endl;
    }
    cout << "number of element : " << s.size() << endl;
    s.insert(20);
    cout << "number of element : " << s.size() << endl;
    // s.clear();
    // cout << "number of element : " << s.size() << endl;
    int key = 15;
    if (s.find(key) == s.end())
    {
        cout << "kEY NOT FOUND" << endl;
    }
    else
        s.erase(key); // or alternate  <-- auto temp = s.find(key); s.erase(temp);
    cout << "key found" << endl;

    // int delete_key = 15;
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << endl;
    }
    cout << "number of element : " << s.size() << endl;

    // count fun..
    if (s.count(5))
    {
        cout << "key found" << endl;
    }
    else
        cout << "Key not found" << endl;
    return 0;
}
/*
  An unordered_set is implemented using a hash table

  where keys aer hashed into indices  of a hash table
   that the insertion is always randomised

  All operations on the unordered_set take s
   constant time O(1) on an average
   which can go up to line time  O(n) in  worst case
    which depends on the internally used hash function,
     but practically they perform very well and generally provide a constant time lookup opration.
 */

/* Set vs unordered_set
 set  -> keys are stored in orderd fashion
 unordered_ser -> keys are stored in unordered fashion

set is internally implemented as RED BLACK Tree
unordered_set is internally implemented  HASHING

set oepration -> Time complexity O(log n)
unordered_set oepration -> Time complexoty O(1)

*/

/* FUNCTIONS

insert() , size() , clear() , begin() , end() , find() ,
erase() , count().

*/

/*Practices it on other day


#include <iostream>
#include <unordered_set>

using namespace std;
int main()
{
    unordered_set<int> us;

    us.insert(2);
    us.insert(4);
    us.insert(6);
    us.insert(8);
    us.insert(9);
    us.insert(4);
    cout << "Size is : " << us.size() << endl;
    ;
    for (auto it = us.begin(); it != us.end(); it++)
    {
        cout << (*it) << " ";
    }

    int key = 16;
    if (us.find(key) == us.end())
    {
        cout << "Key not found !!" << endl;
    }
    else
    {
        cout << "\nElement found and deleted " << key << endl;
        us.erase(key);
    }
    cout << "\nSize is : " << us.size() << endl;
    // us.end(5);
    for (auto iter = us.begin(); iter != us.end(); iter++)
    {
        cout << (*iter) << " ";
    }
    us.clear();
    cout << "\nElements cleared" << endl;
    cout << "\nSize is : " << us.size() << endl;

    // for (auto itr = us.begin(); itr != us.end(); itr++)
    // {
    //     cout << "Elements after clear() : " << (*itr) << " ";
    // }
    return 0;
}
*/