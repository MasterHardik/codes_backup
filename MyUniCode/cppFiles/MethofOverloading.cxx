#include<stdio.h>
class A{
	public: void M1(int b){
		printf("\nM1");
		}
	public: void M1() {
		printf("\nM2");
		}
	};
int main(){
	A obj;
	obj.M1(2);
	obj.M1();
	return 0;
	}