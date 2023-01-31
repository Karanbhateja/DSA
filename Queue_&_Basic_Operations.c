#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int front=-1;
int rear=-1;

//////////////////////////////// Traverse /////////////////////////////

void traverse(){
    int temp = front;
    while(temp<=rear){
        if(rear==front){
            printf("Queue is empty");
        }
        else{
            printf("%d",queue[temp]);
            temp++;
        }
    }
}


//////////////////////////////// Enqueue ///////////////////////////////

void enque(int a){
    if(rear ==  SIZE -1){
        printf("Queue is full, Overflow \n");
        return;
    }
    else if(rear==-1 && front ==-1 ){
        front=0;
        rear=0;
    }
    else{
        rear+=1;
    }
    queue[rear]=a;
    printf("%d has been inserted in the queue \n", a);
}

///////////////////////////////// Dequeue /////////////////////////////

void deque(){
    if( (front==-1 && rear==-1) || front>rear ){
        printf("Cannot be deleted, Underflow \n");
    }
    else{
        int data=queue[front];
        front+=1;
        printf("Element %d has been deleted \n",data);
    }
}

void main(){
    enque(6);
    enque(7);
    enque(7);
    enque(6);
    enque(7);
    enque(7);

    deque();

    traverse();
}
