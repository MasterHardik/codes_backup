//WAP to print the sum of all the prime numbers between 1 to n

#include<iostream>
using namespace std;

//function
void prime_numbers(int num,int arr[]){
	int cnt = 0;
	for(int i=2;i<num;i++){
		for(int j =2; j*j<num ; j++)
		if(i%j != 0||i==2){
			 arr[cnt]=i;
			cnt++;
			}
		}
	}
	//printing prime numbers addition function
	int _print_added_prime(int m,int ar[]){
		int sum=0;
		for(int i=0;i<m;i++){
			sum+=ar[i];
			}
		cout<<"The sum is : "<<sum;
		}
//main
int main(){
	cout<<"\tThis program will print addition of prime numbers betwween 1 to n \n";
	cout<<"Enter n value :  ";
	int n_value;
	cin>>n_value;
	int prime_container[]={};
	prime_numbers(n_value,prime_container);
	_print_added_prime(n_value,prime_container);
	
	return 0;
	}
