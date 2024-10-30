#include<iostream>
#define MAX 3

using namespace std;
char queue [MAX];
int front{-1} ,rear{-1},counter{0};

int isEmpty(){
	if(counter==0){
		return 1;
	}
	else return 0;
}

int isFull(){
	if(counter==MAX){
		return 1;
	}
	else return 0;
}



void enqueue(char c)
{
    if (isFull())
    {
        printf("Queue is Full.\n");
    }
    else 
    {
        rear = (rear+1)%MAX;
        queue[rear] = c ;
        counter++;
    }
}

	


void dequeue()
{
    if(isEmpty())
    {
        printf("Queue is empty\n");
        
    }
    else
    {
        front = (front+1)%MAX ;
        counter-- ;
        cout<<queue[front]<<" ";
    }
}

int main(int argc, char const *argv[])
{
	enqueue('1');
	enqueue('2');
	enqueue('3');
	enqueue('4');
	enqueue('5');
	dequeue();
	dequeue();
	dequeue();
	return 0;
}