#include<iostream>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int arr[6] = { 5,4,6,3,7,1};
	sort(arr.begin(),arr.end());
	for(int i=0;i<6;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}