#include<iostream>

using namespace std;

//pattern1;
void pattern1(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<j+1<<" ";
		}
		cout<<"\n";
	}
}

//pattern2;
void pattern2(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<i+1<<" ";
		}
		cout<<"\n";
	}
}

//pattern3;
void pattern3(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<"* ";
		}
		cout<<"\n";
	}
}

//pattern4;
void pattern4(int n){
	int cnt{1};
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<cnt++<<" ";
		}
		cout<<"\n";
	}
}

//pattern5;
void pattern5(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==0||j==0||i==n-1||j==n-1)cout<<"* ";
			else cout<<"  ";
		}
		cout<<"\n";
	}
}

//pattern6;
void pattern6(int n){
	int cnt{1};
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j||j==0||i==n-1)cout<<"* ";
			else cout<<"  ";
		}
		cout<<"\n";
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	// pattern1(n);
	// pattern2(n);
	// pattern3(n);
	// pattern4(n);
	// pattern5(n);
	pattern6(n);
	return 0;
}