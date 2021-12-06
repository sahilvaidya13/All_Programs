#include <stdio.h>

struct Queue{
    int front,rear,size;
    int* Q ;
};

void create (struct Queue *q,int size){
    q->size = size ;
    q->Q = (int *)malloc(q->size*sizeof(int)) ;
    q->front=-1;
    q->rear=-1 ;
}

void enq(struct Queue *q,int x){
    if((q->rear+1)%q->size==q->front){
        printf("Queue is Full\n") ;
    }else{
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear] = x ;
    }
}

int deq(struct Queue *q){
    int x=-1 ;
    if(q->rear==q->front){
        printf("Queue is Empty\n") ;
    }else{
        q->front=(q->front+1)%q->size ;
        x = q->Q[q->front];
    }
    return x;
}

void Display(struct Queue q){
    int i=q.front+1;
    do{
        printf("%d ",q.Q[i]);
        i=(i+1)%q.size ;
        }while(i!=(q.rear+1)%q.size);
        printf("\n") ;
}

int main(){
    struct Queue q;
    create(&q,5);
    enq(&q,10);
    enq(&q,20);
    enq(&q,30);
    enq(&q,40);
    enq(&q,50);
    Display(q) ;
    deq(&q);
    Display(q) ;
    
}
