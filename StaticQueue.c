#include <stdio.h>

struct Queue{
        int front,rear;
        int Q[10] ;
};

void create(struct Queue *q){
        q->front=-1;
        q->rear= -1 ;
}

void enq(struct Queue *q,int x){
if(q->rear==9){
printf("Queue is Full\n") ;
}else{
        q->rear++;
        q->Q[q->rear] = x;
}
}

int deq(struct Queue *q){
        int x=-1;
if(q->front==q->rear){
printf("Queue is Empty") ;
}else{
        q->front++ ;
        x = q->Q[q->front];
}
return x ;
}

void display(struct Queue q){
for (int i=q.front+1;i<=q.rear;i++){
        printf("%d ",q.Q[i]);
}
printf("\n");
}



int main(){
    struct Queue q ;
    create(&q) ;
    int num,val ;
    printf("----------Queue Operations----------\n");
    printf("1.Enqueue\n");
    printf("2.Deqeueu\n");
    printf("3.Display\n");
    printf("4.Exit\n") ;
do{
    printf("Enter an option:") ;
    scanf("%d",&num);
    switch(num){
            case 1:
            printf("Enter number to add:");
            scanf("%d",&val) ;
            enq(&q,val) ;
            display(q) ;
            break ;
            case 2:
            deq(&q) ;
            display(q) ;
            break;
            case 3:
            display(q) ;
            break;
            case 4:
            continue ;
            default:
            printf("Invalid entry!!\n") ;
    }
        }while(num!=4) ;
        
        printf("Exiting the program...");
    return 0 ;
}

