#include <iostream>
using namespace std;
class Data{
	public:
	int a,b;
	int c;
	int Sum(int a,int b){
		int c=a+b;
		return c;
	}
};
	
int main(){
	Data h;
	cout <<"Ans is "<<h.Sum(4,5)<<endl;
	return 0;

};
