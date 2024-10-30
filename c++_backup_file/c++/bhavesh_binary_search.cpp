#include<bits/stdc++.h>
using namespace std;
int binary_search(int array[],int n,int key)
{
	int low=0;
	int high=n-1;
	while(low<=high)
	{
		int mid = (low + high)/2;
		if(array[mid]==key)
		{
			return mid;
		}
		else if(array[mid]>key)
		{
			high=mid-1;
		}
		else
		{
			//high=mid-1;
			low=mid+1;
		}
		mid=(low + high)/2;
	}
}
int binary_search_recursive(int array[],int low,int high,int key)
{
	//int low=0;
	//int high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(array[mid]==key)
		{
			return mid;
		}
		else if(array[mid]<key)
		{
			return binary_search_recursive(array,mid+1,high,n);
		}
		else{
			return binary_search_recursive(array,low,mid-1,n);
		}
	}
}
int main()
{
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	sort(array,array+n);
	int key;
	cout<<"Enter key to search in an array : ";
	cin>>key;
	// int index=binary_search(array,n,key);
	int val=binary_search_recursive(array,0,n-1,key);
	cout<<"binary recursive array : ";
	cout<<val<<endl;
	return 0;
}