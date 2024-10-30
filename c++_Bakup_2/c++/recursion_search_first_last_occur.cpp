/* WAP to find first and last occurence of a number */

#include<iostream>

using namespace std;

int first_occ(int a[],int n,int i,int key)
{
	if(i==n){
		return -1;
	}
	if(a[i]==key){
		return i;
	}
	return first_occ(a,n,i+1,key);
}

int last_occ(int a[],int n,int i,int key)
{
	if(i==n){
		return -1;
	}   // this is base condition

	int restArray = last_occ(a,n,i+1,key);
	
	if(restArray!=-1){
		return restArray;
	}

	if(a[i]==key){
		return i;
	}
	return -1;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	int key;
	cin>>key;

	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int j=0;
	cout<<first_occ(arr,n,j,key)<<endl;
	return 0;
}