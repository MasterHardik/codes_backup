#include<iostream>
using namespace std;

struct node{
	int data1;
	char data2;
	struct node* link;    //structure using the data type of itself
};

int main(int argc, char const *argv[])
{
	struct node ob1;   //Node1

	//Initialization
	ob1.link = NULL;
	ob1.data1 = 10;
	ob1.data1 = 20;

	struct node ob2;

	ob1.link = NULL;
	ob1.data1 = 30;
	ob1.data1 = 40;

	//Linking ob1 and ob2
	ob1.link = &ob2;

	cout<<("%d",ob1.link -> data1);
	cout<<("\n%d",ob1.link -> dadta2);

	return 0;
}