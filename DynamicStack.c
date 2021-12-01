#include <stdio.h>
#include <stdlib.h>

struct node{
    int val;
    struct node* next;
}*top=NULL;
#define max 100



void push(int x){
    struct node  *temp = NULL;
    if(counter(top)>max){
        printf("Cant add more objects");
    }else{
    temp = (struct node*)malloc(sizeof(struct node));
    temp->val=x;
    temp->next=NULL ;
    if(top==NULL){
        top=temp;
    }
    else{
        //top->next=temp;
        //top=top->next;
        temp->next = top;
        top = temp;//
    
    }
    }
    
}
void pop(){
    struct node *temp = NULL;
    if (top == NULL)
    {
        printf("stack is empty\n");
    }
    else{
        temp = top;
        top = top->next;
        printf("element popped from stack is %d\n", temp->val);
        free(temp);
    }
    
}
int peek(){
    printf("%d \n", top->val);
}

void display(struct node* n){
    while(n!=NULL){
        printf("%d ",n->val);
        n=n->next;
    }
    printf("\n") ;
}
int counter(struct node* n){
    int count=0;
    while(n!=NULL){
        count++;
        n = n->next;
    }
    
    return count;
}
void isEmpty(){
    if(top == NULL){
        printf("stack is empty\n");
    }
    else{
        printf("stack is not empty\n");
    }
}

void isFull(){
    int check;
    check = counter(top);
    if(check>max){
        printf("Stack Overflow\n");
        
    }else{
        printf("Memory is available\n");
    }
       
    
}
int main(){
   int val,num;
    printf("----------Stack Operations----------\n");
    printf("1.Push\n");
    printf("2.Pop\n");
    printf("3.Display\n");
    printf("4.isFull\n");
    printf("5.isEmpty\n");
    printf("6.Peek\n");
    printf("7.Counter\n");
    printf("8.Exit\n") ;
    
    do{
        printf("Enter an option:");
        scanf("%d",&num);
        switch(num){
            case 1:
            printf("Enter number to add:");
            scanf("%d",&val);
            push(val);
            break;
            case 2:
            pop();
            break;
            case 3:
            display(top);
            break;
            case 4:
            isFull();
            break;
            case 5:
            isEmpty();
            break;
            case 6:
            peek();
            break;
            case 7:
            printf("Elements in Stack: %d\n",counter(top));
            break;
            case 8:
            continue;
            
            default:
            printf("Invalid Entry!\n");
        }
        
    }
    while(num!=8);
    printf("Exiting the program..\n");
     return 0;
}
