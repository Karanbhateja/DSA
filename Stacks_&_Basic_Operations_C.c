#include <stdio.h>

int size = 5;
int top=-1;
int stack[5];

// Peek

void peek(){
    if (isempty()){
        printf("Stack is Empty");
    }
    else{
        printf("%d \n",stack[top]);
    }
}

// IsEmpty

int isempty(){
    if (top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

// IsFull 

int isfull(){
    if (top==size-1){
        return 1;
    }
    else{
        return 0;
    }
}

// Pop Operation 

void pop(){
    if(isempty())
    {
        printf("Stack is Empty \n");
    }
    else{
        int data = stack[top];
        top -=1;
        printf("%d \n",data);
    }
}

// Push Operation 

void push(int a){
    if (isfull()){
        printf("Stack is full \n");
    }
    else{
        top+=1;
        stack[top]= a;
        peek();
    }
}

void main(){
    printf("%d \n",isempty());
    printf("%d \n",isfull());
    push(3);
    push(6);
    push(0);
    push(8);
    push(5);
    push(9);

    pop();
    pop();

    peek();
}
