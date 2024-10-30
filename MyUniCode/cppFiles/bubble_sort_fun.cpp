#include<bits/stdc++.h>
#define ll long long
using namespace std;
void insertion_sort(ll a[],ll size){
    int t;
   for(ll i=0;i<size-1;i++){
       for(int j=0;j<size-1-i;j++){
           if(a[j+1]<a[j]){
               swap(a[j+1],a[j]);
           }
       }
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
