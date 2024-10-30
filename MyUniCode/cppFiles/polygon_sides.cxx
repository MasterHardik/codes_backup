#include <iostream>
using namespace std;

int N = 0;
int arr[] = {};
//This is function
int input(int a[])
{
	for (int i = 0; i < (2*N); i++)
	{
		cin >> a[i];
	}
  return 0 ;
}
//This will be the polygon side counting function
int count_sides(int a[]){
	int side=1;
	if(N>=3&&N<=10&&a[0]==a[N-1]){
		for(int j=1;j<=N;j++){
			if(a[j]==a[j+1]){
				side++;
				j++;
				}
				
			}
		return side;
		}
	else return 0;
	
	}
//This is main function
int main()
{
	cin >> N;
	input(arr);
	cout<<count_sides(arr);
	return 0;
}