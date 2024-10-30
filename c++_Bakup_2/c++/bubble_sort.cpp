#include<iostream>


using namespace std;

int swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubble_sort(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j+1]<a[j])swap(&a[j],&a[j+1]);
		}
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter size of array  : ";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	bubble_sort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}

	return 0;
}