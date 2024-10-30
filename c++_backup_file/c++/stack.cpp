#include<bits/stdc++.h>
#define maxSize 100

using namespace std;
int top{-1};
int stk[maxSize];

void push(int elem){
    if(top==maxSize){
        cout<<"\nStack is full!"<<endl;
    }
    else {
        ++top;
        stk[top] = elem;
    }
}

void pop(){
    if(top==-1){
        cout<<"\nStack is Empty!"<<endl;
    }
    else
    {

        cout<<stk[top];
        top--;
    }
}

int main()
{
    push(1);
    pop();
    pop();
    push(2);
    pop();
    return 0;
}

//This is the program to implement stack with its push pop functions