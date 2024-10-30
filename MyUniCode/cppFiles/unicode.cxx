int main(int argc, char *argv[])
{
	#include<iostream>
using namespace std;
int n;
void print(int i,int j ){
			if(i==0||i==(2*n)-2||j==0||j==(2*n)-2){
				cout<<n;
			}
		//	if cout<<"#";
		else cout<<i-j;
}
int main(){
	cin>>n;
	cout<<"\n";
	for (int i=0;i<(2*n)-1;i++){
		for(int j =0;j<(2*n)-1;j++){
			if(i==n-1&&j==n-1){
			cout<<"1";
			}
			print(i,j);
			//else cout<<"#";
		}
	cout<<"\n";
	}
	return main();
}
}