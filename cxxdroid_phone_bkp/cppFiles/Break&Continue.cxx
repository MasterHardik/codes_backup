#include<iostream>
using namespace std;
//Practice of Break and Continue Statements 
int main(){
	int i=0;
	for(i=0;i<30;i++){
		if(i==15){
			continue;
			}
		if(i==25){
			break;
			}
			cout<<i<<endl;    //this should be placed at the last otherwise continue statement wont run 
		
		}
	return 0;
	}