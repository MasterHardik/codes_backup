#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll count_digit{0};

ll find_first(ll num)
{

    ll first_digit{num % 10};
    while (num)
    {
        ++count_digit;
        first_digit = num % 10;
        num /= 10;
    }
    return first_digit;
}

// if not using bits or cmath header then following power func using reccursion can be used
ll power(ll base, ll exp)
{
    if (exp == 0)
    {
        return 1;
    }
    else
        return base * power(base, exp - 1);
}

int main()
{
    ll num;
    cout << "Enter number to be updated         : ";
    cin >> num;

    ll last_digit = num % 10;
    ll first_digit = find_first(num);

    ll swaped_num;
    swaped_num = num - last_digit + first_digit;                                                                  // for swaping last digit
    swaped_num = swaped_num - (first_digit * pow(10, count_digit - 1)) + (last_digit * pow(10, count_digit - 1)); // can use power function also inspite of this pre define pow fun...

    cout << "After Swaping first and last digit : " << swaped_num << endl;
    //    now to swap fist_digit and last_digit we will just zerofy the first digit and then add the last digit to that place value
    return 0;
}