#include <stdio.h>
int main(){
    int num,fact ;
    fact = 1 ;
    while(1){
    printf("enter number:\n");
    scanf("%d",&num);
    
    for(int i=num;i>0;i--){
        fact = fact*i ;
        
    }
    printf("factorial is %d\n",fact) ;
    fact = 1 ;
    }
    return 0 ;
}