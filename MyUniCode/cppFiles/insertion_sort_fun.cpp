#include<bits/stdc++.h>
#define ll long long
using namespace std;
void insertion_sort(ll a[],ll size){
    int t;
    for(ll i=1;i<size;i++){
        t=a[i];
        int j=i-1;
        while(j>=0&&a[j]>t){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=t;
    }
}
int main(){
    ll size;
    cin>>size;
    ll array[size];
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    insertion_sort(array,size);
        cout<<"Elements after sorting are : [ ";
    for(int i=0;i<size;i++){
        cout<<array[i];
      if(i<size-1){
          cout<<" , ";
      }
    }
    cout<<" ]\n"<<endl;
    return 0;
}
