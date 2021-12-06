#include <stdio.h>
int prime(int num){
    for(int i=2;i<num;i++){
        if(num%i==0){
            return 0 ;
        }else{
            return 1 ;
        }
    }
}
int main(){
    int n1,n2 ;
    printf("Enter 2 numbers:\n");
    scanf("%d %d",&n1,&n2) ;
    if(prime(n1)==1){
        printf("\n%d is prime.\n",n1);
    }
    if(prime(n1)==0){
        printf("\n%d is not prime.\n",n1);
    }
    if(prime(n2)==1){
        printf("\n%d is prime.\n",n2);
    }
    if(prime(n2)==0){
        printf("\n%d is not prime.\n",n2);
    }
}
