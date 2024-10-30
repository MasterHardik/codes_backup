#include<iostream>
using namespace std;
//power fun
int pow(int base,int exp){
    int res{base},itr{exp};
    while(itr>1){
        res*=base;
        itr--;
    }
    return res;
}
//cnt digits
int cnt_digit(int n){
    int cnt{0};
    while(n>0){
        n/=10;
        cnt++;
    }
    return cnt;
}
//isDisarium fun
bool isDisarium(int n){
    int res{0},po{cnt_digit(n)},temp{n};
        while(po>0){
            res+=pow(n%10,po);
            n/=10;
            po--;
        }
        if(res == temp)
            return 1;
    return 0;
}
int main(){
    int n;
    cout<<"Enter a number to check for disarium : ";
    cin>>n;
    cout<<(isDisarium(n)?"\nIs Disarium Number.":"\nIs not Disarium Number.");
    return 0;
}

//WAP to check disarium number