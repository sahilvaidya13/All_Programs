#include <stdio.h>

int Xor(int num){
    if(num==1){
        return 1;
    }else{
        return num^Xor(num-1) ;
    }
}


int main(){
    int key ;
    printf("Enter number for Xor between 1 and N:");
    scanf("%d",&key) ;
    printf("XOR between 1 and %d is: %d",key,Xor(key)) ;
}
