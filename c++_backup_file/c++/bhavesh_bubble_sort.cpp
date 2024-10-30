#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int array[],int n){
	int counter =1;
	bool ans=false;
	while(counter<n)
	{
		for(int i=0;i<n-1;i++)
		{
			if(array[i]>array[i+1])
			{
				ans=true;
				int temp=array[i];
				array[i]=array[i+1];
				array[i+1]=temp;
			}
		}
		if(ans==true)
		{
			counter++;
		}
		else{
			//counter=n
			break;
		}
	}
}
int main()
{
	int n;
	cout<<"Enter size : ";
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	bubble_sort(array,n);
	cout<<"sorted array :  ";
	for(int i=0;i<n;i++)
	{
		cout<<array[i]<<" ";
	}
	return 0;
}