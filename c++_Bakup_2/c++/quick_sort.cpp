#include<iostream>

using namespace std;

void swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}

int partition(int a[],int l,int u){
	int piv{a[l]},i=l,j=u;
	if(i<=u){
		while(piv>a[i]&&i<u)i++;
		while(a[j]>piv)j--;
		if(i<j)	{
			swap(&a[i],&a[j]);
		}
		else if(l>=j)piv = a[j];
	}
	return piv;
}

void quick_sort(int a[],int l,int h){
	if(l<h)
	{


	int pi =partition(a,l,h);

	quick_sort(a,l,pi - 1);
	quick_sort(a,pi+1,h);
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	quick_sort(arr,0,n - 1);

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}