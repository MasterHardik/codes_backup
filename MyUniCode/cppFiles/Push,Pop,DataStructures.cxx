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