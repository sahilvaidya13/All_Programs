#include <stdio.h>
int main(){
    float R,G,B ;
    float R1,G1,B1 ;
    float C,K,M,Y ;
    float res ;
    printf("Enter R,G,B values\n");
    scanf("%f",&R);
    scanf("%f",&G);
    scanf("%f",&B);
    
    R1 = R/255 ;
    G1 = G/255 ;
    B1 = B/255 ;
    
    if(R1>G1 && R1>B1){
        res = R1 ;
    }else if (G1>R1 && G1>B1){
        res = G1 ;
    }else{
        res = B1 ;
    }
    if(R==0 &&G==0 &&B==0){
        C = 0 ;
        M = 0 ;
        Y = 0 ;
        K = 1 ;
    }else{
    K = 1 - res;
    C = (1-R1-K)/(1-K) ;
    M = (1-G1-K)/(1-K) ;
    Y = (1-B1-K)/(1-K) ;
    }
    printf("C,M,Y,K is: (%f , %f , %f , %f",C,M,Y,K);
    return 0 ;
}
