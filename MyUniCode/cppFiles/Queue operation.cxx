#include<stdio.h>

int queue[5];
int front = -1,rear = -1,counter = 0;

void enqueue(int x)
{
    if(counter == 5)
      printf("queue is full");
    else
    {
        if(rear == -1)
          front = 0;
        
        rear = (++rear) % 5;
        queue[rear] = x;
        counter++;
    }
}

int dqueue()
{
    int x = -1;
    
    if(counter == 0)
        printf("queue is empty");
    else
    {
        x = queue[front];
        front = (++front)%5;
        counter--;
    }

    return(x);
    
}
int main()
{
    enqueue(3);
    enqueue(4);
    
    int x = dqueue();
    printf("%d ",x);

     x = dqueue();
    printf("%d ",x);
    return 0;

    x = dqueue();
    printf("%d ",x);
    return 0;
}