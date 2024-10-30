#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define maxsize 5

void insert();

void del();

void display();

int front = -1, rear = -1;

int queue[maxsize];

void main ()

{

    clrscr();

    int choice;

    while(choice != 4)

    {

printf("\n1.Insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");

printf("Enter your choice: ");

scanf("%d",&choice);

switch(choice)

{

    case 1:

    insert();

    break;

    case 2:

    del();

    break;

    case 3:

    display();

    break;

    case 4:

    exit(0);

    break;

    default:

    printf("\nEnter valid choice!\n");

}

    }

}

void insert()

{

    int item;

    printf("Enter the element: ");

    scanf("%d",&item);

    if(rear == maxsize-1)

    {

printf("\nOVERFLOW\n");

return;

    }

    if(front == -1 && rear == -1)

    {

front = 0;

rear = 0;

    }

    else

    {

rear = rear+1;

    }

    queue[rear] = item;

    printf("Value inserted!\n");

}

void del()

{

    int item;

    if (front == -1 || front > rear)

    {

printf("\nUNDERFLOW\n");

return;

    }

    else

    {

item = queue[front];

if(front == rear)

{

    front = -1;

    rear = -1 ;

}

else

{

    front = front + 1;

}

printf("Value deleted\n");

    }

}

void display()

{

    int i;

    if(rear == -1)

    {

printf("Empty queue\n");

    }

    else

    {   printf("Queue Elements are:");

for(i=front;i<=rear;i++)

{

    printf(" %d",queue[i]);

}

printf("\n");

    }

}


