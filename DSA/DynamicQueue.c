#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next ;
};

struct node* front=NULL;
struct node* rear=NULL;

void enqueue(int val){
    struct node* temp =NULL;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    
    if(front==NULL){
        front=temp;
        rear=temp;
    }else{
        rear->next=temp;
        rear = temp;
    }
}

int dequeue(){
    int delt=-1;
    if(front==NULL){
        printf("Queue is Empty\n");
    }else{
     delt=front->data;
    struct node* nw = front;
    front=front->next;
    free(nw);
    }
    return delt;
}

void display(struct node* n){
    while(n!=NULL){
        printf("%d ",n->data);
        n=n->next;
    }
    printf("\n");
}

int main(){
    int val,num;
    printf("----------Queue Operations----------\n");
    printf("1.Enqueue\n");
    printf("2.Deqeueu\n");
    printf("3.Display\n");
    printf("4.Exit\n") ;
    
    do{
        printf("Enter an option:");
        scanf("%d",&num);
        switch(num){
            case 1:
            printf("Enter number to add:");
            scanf("%d",&val);
            enqueue(val);
            break;
            
            case 2:
            dequeue();
            break;
            
            case 3:
            display(front);
            break;
            case 4:
            continue;
            
            default:
            printf("Invalid Entry!\n");
        }
        
    }
    while(num!=4);
    printf("Exiting the program..\n");
    
    return 0;
    }

