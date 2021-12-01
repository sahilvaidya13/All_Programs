#include <stdio.h>
#include <stdlib.h>

struct node{
    int data ;
    struct node* next ;
};
struct node* head = NULL ;

void append(int val){
    struct node* temp = (struct node*)malloc(sizeof(struct node)) ;
    temp->data = val ;
    
    if(head==NULL){
        head = temp ;
    }else{
        
        struct node* p;
        p = head ;
        while(p->next!=NULL){
            p=p->next ;
        }
        p->next = temp ;
    }
    
}

int delt(struct node* p,int pos){
    int x=-1;
    struct node* pp=NULL;
    if(pos==1){
        pp=head;
        x=head->data;
        head=head->next;
        free(pp);
        return x;
        
    }
    else{
    
    for(int i=0;i<pos-1;i++){
        pp=p;
        p=p->next;
    }        
    pp->next=p->next;
    x=p->data;
    free(p);
    return x;


}
}

void reverse(struct node* n){
  if(n!=NULL){
    reverse(n->next);
    printf("%d ",n->data) ;
  }
  printf("\n");
  
}


void selectionSort(struct node* p){
    struct node* q=p;
    struct node* trv = p;
   
    while(p!=NULL){
        trv=p;
        q=p;
    while(trv!=NULL){
        
        if(q->data > trv->data){
            q = trv;
        }
        trv=trv->next ;
        
    }
    int temp = p->data;
    p->data = q->data;
    q->data = temp;
    p=p->next;
    }
    
}

void display(struct node* p){
    while(p!=NULL){
        printf("%d ",p->data) ;
        p=p->next ;
    }
    printf("\n") ;
}


int main() {

int num,val;
printf("------Linked List Operations------\n");
printf("1.Append\n");
printf("2.Delete\n");
printf("3.Reverse\n");
printf("4.Sort\n");
printf("5.Display\n");
printf("6.Exit\n");

do{
    printf("Enter an option:");
    scanf("%d",&num);
    switch(num){
        case 1:
        printf("Enter Value:");
        scanf("%d",&val);
        append(val);
        break;
        
        case 2:
         printf("Enter Position:");
         scanf("%d",&val);
         delt(head,val);
         break;
         
         case 3:
         reverse(head);
         break;
         
         case 4:
         selectionSort(head);
         break;
         
         case 5:
         display(head) ;
         break;
         
         case 6:
         printf("Exiting the program...\n");
         return 0;
         break;
         
         default:
         printf("Invalid Entry!\n");
         break;
    }
}
while(num!=6);



return 0 ;
}