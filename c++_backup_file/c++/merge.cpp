#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter size of two array/list: ";
    int s1,s2;
    cin>>s1>>s2;
    //inputing two list 
    int l1[s1],l2[s2];
    //inputing firt list elem
    for(int i=0;i<s1;i++)
    {
        cin>>l1[i];
    }
    //inputing second list elem
    for(int i=0;i<s2;i++)
    {
        cin>>l2[i];
    }
    //logic -->> now we'll compare the elem..'s of two list and there after add then to final new anwer list
    int p=0,q=0,an{0};
    int ans[s1+s2];
    while(p!=s1-1||q!=s2-1)
    {
        if(l1[p]<=l2[q])
        {
            ans[an++] = l1[p++];
        }
        else ans[an++] = l2[q++];
        
    }
    for(int i=p;i<s1;i++)
    {
        ans[an++] = l1[p++];
    }
    for(int i=q;i<s2;i++)
    {
        ans[an++] = l2[q++];
    }
//outputing the merged list
cout<<"-->>";
for(int i=0;i<s1+s2;i++)
{
    cout<<ans[i]<<" "<<endl;
    cout<<"-->>";
}
    return 0;
}

//This is a program to merge two sorted list