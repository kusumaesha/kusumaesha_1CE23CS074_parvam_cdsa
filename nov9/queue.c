#include<stdio.h>
#define n 5
int front=-1,rear=-1;
int queue[n];
void enqueue(){
    int data;
    printf("enter the data: ");
    scanf("%d",&data);
    if(rear==n-1){
        printf("overflow");
    }
    else if(front==-1 && rear==-1){
        front++;
        rear++;
        queue[rear]=data;
    }
    else{
        rear++;
        queue[rear]=data;
    }
}
void dequeue(){
    if(front==-1 && rear==-1){
        printf("underflow");
    }
    else{
        front++;
        }
    }
    void display(){
        for(int i=front;i<=rear;i++){
        printf("%d",queue[i]);
    }
    }
    

int main(){
    int choice;
    do{
        printf("enter the choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            default:
            printf("invalid");
            
        }
    }
    while(choice!=0);
}