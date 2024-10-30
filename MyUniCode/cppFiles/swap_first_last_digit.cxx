#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int num=n;
    int f,l,cnt{0};
    l = n%10;
    while(n>0){
        cnt++;
        n/=10;
    }
    int places =pow(10,cnt-1);
    f=num/places;
    num=num-l+f+-(f*places)+(l*places);
    cout<<num;
    return 0;
}