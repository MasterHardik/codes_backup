#include<iostream>
using namespace std;
int bin_search(int arr[],int l,int h,int key){
	if(l<=h){
		int mid = (l+ h)/2;
		if(arr[mid]==key)
			return mid;
		if(arr[mid]>key)
			return bin_search(arr,l,mid-1,key);
		if(arr[mid]<key)
			return bin_search(arr,mid+1,h,key);
	}
	return -1;
}
int main(){
	int size,l,h,key;
	cout<<"Enter array size: ";
	cin>>size;
	int arr[size];
	cout<<"Enter "<<size<<" elements here: ";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<"Enter the key element to be found : ";
	cin>>key;
	int res = bin_search(arr, 0, size-1 , key);
	if(res!=-1){
		cout<<"Element "<<key<<" is found at index : "<<res;
	}
	else cout<<"Element "<<key<<" not found..!!";
	
	
	return 0;
	
}

/*
	Write a program of	binary search
*/