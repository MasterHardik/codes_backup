#include<iostream>

using namespace std;

void swap(int *a,int*b){
	*a = *a + *b;
	*b = *a - *b; 
	*a = *a - *b;
}

void selection_sort(int a[],int n){
	for(int i=0;i<n-1;i++){
		int min = i;
		for(int j=i+1;j<n;j++){
			// if(a[j]<=a[min])min = j;
			if(a[min]>=a[j])min = j;
		}
		swap(&a[min],&a[i]);
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter Size of array : ";
	cin>>n;
	int a[n];
	cout<<"\nEnter "<<n<<" array Elements : ";
	for(int i=0;i<n;i++)
		cin>>a[i];
	selection_sort(a,n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	
	return 0;
}