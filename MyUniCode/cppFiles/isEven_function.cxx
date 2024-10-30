#include <iostream>

using namespace std;
int isEven(int n){
    // if(n%2==0){
    //     return true;
    // }
    // else return 0;
    
    return (n%2)==0;
}
//main
int main() {
    int num;
    cin>>num;
    if(isEven(num)){
        cout<<"IS EVEN\n";
    }
    else cout<<"IS NOT EVEN\n";
}