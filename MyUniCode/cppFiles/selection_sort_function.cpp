#include<bits/stdc++.h>
#define ll long long
using namespace std;
void selection_sort(ll a[],ll size){
    int t;
    for(ll i=0;i<size-1;i++){
            ll min =i;
            for(ll j=i+1;j<size;j++){
                if(a[j]<a[min])
                min=j;
            }
            // t=a[i];
            // a[i]=a[min];
            // a[min]=t;
            swap(a[i],a[min]);  //<--- inbuild swap function used
    }
}
int main(){
    ll size;
    cin>>size;
    ll array[size];
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    selection_sort(array,size);
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
