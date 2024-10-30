/*
mam's code '
#include <stdio.h>
int stack[5], top = -1;

void push(int x)
  {
      if(top == 4)
       printf("Stack is full \n");
      else
       {
           top++;
           stack[top] = x;
       }
  }
  
int pop()  
 {
     int x =-1;
     if(top == -1)
      printf("Stack is empty \n");
     else
      {
        x = stack[top];
          top-- ;
      }
      
      return(x);
 }

int main()
{
    int p;
    push(3);
    push(4);
    push(5);
    push(8);
    push(9);
    push(12);
    
    p = pop();
    printf("%d  ",p);
    p = pop();
    printf("%d  ",p);
    p = pop();
    printf("%d  ",p);
    p = pop();
    printf("%d  ",p);
    p = pop();
    printf("%d  ",p);
    p = pop();
    printf("%d  ",p);
    return 0;
}

*/

//This is a stack program 
#include<stdio.h>
int stack[5];
	int top=0;
	void push(int x){
		if (top ==4){
			printf("Stack is full");
			}
		else
		{
			top++;
			stack[top]=x;
			}
			return x;
		}
		int pop(){
			int x=-1;
			if (top==-1){
				printf("Stack is empty");
			else{
				int x;
				x=stack[top];
				top--;
				return(x);
				}
				}
			}
int main(){
	int p;
	int push(3);
	int push(4);
	int push(5);
	int push(6);
	int push(7);
	return 0;
	}