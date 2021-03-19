#include <stdio.h>
int fact(int num){
    if(num==0 || num==1){
        return 1 ;
    }else{
    return fact(num-1)+fact(num-2) ;
    }
}


int main(){
    int val ;
    printf("Enter value:\n");
    scanf("%d",&val);
    int exct = val-2 ;
    printf("%d",fact(exct)) ;
    return 0 ;
}