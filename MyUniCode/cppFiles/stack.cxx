///Create a Stack and apply push and pop operation on it
#include <iostream>
#include <stdlib.h>
int top = -1, stack[5];
using namespace std;
//is empty function
void isEmpty(){
	//empty condition
	if (top == -1)
	{
		cout << " |  Stack is Empty | \n";
		cout<<"----------------------\n";       //remove if curly backets then see two horizontal line on run
	}
	}
	//is full function
	void isFull(){
		//check overflow
	if (top == 4)
	{
		cout << " |  Stack is Full  |\n";
		cout<<"----------------------\n";
	}	
		}
//push function
void push(int value)
{
	isFull();
	if(top!=4){
				top++;
		stack[top] = value;

	}
	//insert
	
}
//pop function
int pop(void)
{
	isEmpty();	
	if(top!=-1)
	{
		cout <<" |        "<< stack[top]<<"        |\n";
		cout<<"----------------------\n";
		top--;
	}

} //main function

int main()
{
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	push(6);
	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
	
	/*
	cout << sizeof(stack);
	cout << endl;
	//cout<<"Size of stack : "<<sizeof(stack)/sizeof(int);
	*/
	return 0;
}