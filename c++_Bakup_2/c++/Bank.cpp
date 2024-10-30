#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
map<string, int> accounts; // map (Name, acc,pswd)
class Bank
{
public:
    bool verify(string c_name, int pwd)
    {
        for (auto s : accounts)
        {
            if (s.first == c_name && s.second == pwd)
            {
                return true;
            }
        }
        return false;
    }
    void CreateAcc()
    {
        unsigned int acc_nu = rand();
        unsigned int pswd;
        string c_name;
        // cout << "================================================================" << endl;
        cout << "Enter your name : ";
        cin >> c_name;
        cout << "\nEnter your password : ";
        cin >> pswd;
        cout << "your Acc no is : " << acc_nu << endl;
        auto temp = accounts.find(c_name);
        bool b{false};
        for (auto f : accounts)
        {
            if (f.first == c_name)
            {
                cout << "Already exist !!" << endl;
                b = {true};
                break;
            }
        }
        if (!b)
        {
            accounts["c_name"] = pswd;
            cout << "\n****************** ACCOUNT SUCCESFULLY CREATED *****************\n";
        }
    }
    void checkBal()
    {
        cout << "Enter your name : ";
        string s;
        cin >> s;
        cout << "Enter your pwd  : ";
        int pd;
        cin >> pd;
        if (verify(s, pd))
        {
            cout << "2344\n";
        }
        else
            cout << "Coudn't found !!" << endl;
    }
    void withdrawMoney()
    {
    }
    void DepositeCash()
    {
    }
};

int main()
{
    cout << "\t        +------------------------+" << endl;
    cout << "\t        |** Welcome to CppBank **|\t" << endl;
    cout << "\t        +------------------------+";
    cout << "\n\n";
    cout << "================================================================" << endl;
    cout << "1. Check Balance  ";
    cout << "\t";
    cout << "2. Withdraw Money ";
    cout << "\t";
    cout << "3. Deposite Cash ";
    cout << "\n";
    cout << "\t\t\t";
    cout << "4. Create Account \n";
    cout << "================================================================" << endl;
    cout << "Enter your choice : ";
    int choice;
    cin >> choice;
    cout << "****************************************************************" << endl;
    Bank customer;
    switch (choice)
    {
    case 1:
        customer.checkBal();
        break;
    case 2:
        customer.withdrawMoney();
        break;
    case 3:
        customer.DepositeCash();
        break;
    case 4:
        customer.CreateAcc();
        return main();
        break;

    default:
        cout << "*********************Thanks for using me.!!*********************\n";
        cout << "****************************************************************" << endl;
        break;
    }

    return 0;
}