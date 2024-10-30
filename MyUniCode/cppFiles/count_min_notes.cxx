//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void cnt_min_notes(int n){
    int amt = n;
    int tt,ot,fh,th,oh,fz,tz,oz,f,t,o;
    tt = (n/2000);
    n-=(tt*2000);
    cout<<"\nTotal 2000 Rs notes required for "<<amt<<" : " <<tt<<"\n";
    ot = (n/1000);
    n-=(ot*1000);
    cout<<"Total 1000 Rs notes required for "<<amt<<" : " <<ot<<"\n";
    fh = (n/500);
    n-=fh*500;
    cout<<"Total 500 Rs notes required for "<<amt<<" : " <<fh<<"\n";
    th = (n/200);
    n-=th*200;
    cout<<"Total 200 Rs notes required for "<<amt<<" : " <<th<<"\n";
    oh = (n/100);
    n-=oh*100;
    cout<<"Total 100 Rs notes required for "<<amt<<" : " <<oh<<"\n";
    fz = (n/50);
    n-=fz*50;
    cout<<"Total 50 Rs notes required for "<<amt<<" : " <<fz<<"\n";
    tz = (n/20);
    n-=tz*20;
    cout<<"Total 20 Rs notes required for "<<amt<<" : " <<tz<<"\n";
    oz = (n/10);
    n-=oz*10;
    cout<<"Total 10 Rs notes required for "<<amt<<" : " <<oz<<"\n";
    f = (n/5);
    n-=f*5;
    cout<<"Total 5 Rs notes required for "<<amt<<" : " <<f<<"\n";
    t = (n/2);
    n-=t*2;
    cout<<"Total 2 Rs notes required for "<<amt<<" : " <<t<<"\n";
    o = (n/1);
    n-=o;
    cout<<"Total 1 Rs notes required for "<<amt<<" : " <<o<<"\n";
}
int main(){
    int amt;
    cout<<"Enter amount :";
    cin>>amt;
    cnt_min_notes(amt);
    return 0;
}