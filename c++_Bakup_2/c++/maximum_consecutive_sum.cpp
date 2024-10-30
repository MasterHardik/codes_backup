#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
int arr []= {2,5,4,2,7,9,6,4};
int maxsum = arr[0];
int n = sizeof(arr)/sizeof(int); 
int currsum  = 0;
for(int i=1;i<n;i++){
	currsum = arr[i] + arr[i+1];
	maxsum  = max(maxsum,maxsum+arr[1]);
}
	cout<<maxsum<<endl;

	return 0;
}