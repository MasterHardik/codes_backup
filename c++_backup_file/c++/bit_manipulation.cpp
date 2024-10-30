#include<iostream>

using namespace std;
//getbit function 

int getBit(int n, int pos){
	return ((n&(1<<pos))!=0);
}

//setbit function
int setBit(int n,int pos){
	return (n | (1<<pos));
}

//clearing a bit
int clearBit(int n,int pos){
	int mask = ~(n<<pos);
	return (n & mask);
}

//updateBit function
int updateBit(int n,int pos,int value){
	// clearBit(n,pos);
	// updateBit(n,pos);
	int mask = ~(1<<pos);
	n = n&mask;
	return (n|(value<<pos));
}

int main()
{
	// cout<<getBits(5,2)<<endl;
	// cout<<setBit(5,1)<<endl;
	// cout<<clearBit(5,2)<<endl;
	cout<<updateBit(5,1,1)<<endl;
	
	return 0;
}