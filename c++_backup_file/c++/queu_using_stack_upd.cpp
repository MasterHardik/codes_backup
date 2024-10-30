#include<iostream>
#define MAX 4
using namespace std;

class Stack{
private:

int STACK[MAX];
int top = -1;

public:
int isFull(){
	if(top==MAX-1)return 1;
	else return 0;
}

int isEmpty(){
	if(top==-1)return 1;
	else return 0;
}

void push(int x){
	if(isFull()){
		cout<<"Full"<<endl;
	}
	else STACK[++top] = x;
}

int pop(){
	if(isEmpty()){
		cout<<"Empty"<<endl;
		return -1;
	}
	else return STACK[top--];
}

};
Stack s1,s2;
void enqueue(int c){
	s1.push(c);
    }
int dequeue(){
	while(!s1.isEmpty()){
		s2.push(s1.pop());
	}
	int v = s2.pop();
	while(!s2.isEmpty()){
		s1.push(s2.pop());
	}
	return v;
}

int main(int argc, char const *argv[])
{
	// Stack s1;
	// s1.push(4);
	// cout<<s1.pop();
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	cout<<dequeue()<<endl;
	cout<<dequeue()<<endl;
	cout<<dequeue()<<endl;
	cout<<dequeue()<<endl;
	cout<<dequeue()<<endl;

	return 0;
}
    