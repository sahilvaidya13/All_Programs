#include <iostream>
#include <math.h>
using namespace std ;

struct data{
    
    int n;
    int bin;
};

typedef struct data str;
//Function of type struct to return multiple values related to conversion.
str decTobin(int val){
    int n=0;
    int rem=0 ;
    while(val!=0){
        rem = rem + (val%2)*pow(10,n);
        val/=2;
        n++ ;
    
    }
  //Struct object created as S.
    str S;
    S.n = n;
    S.bin = rem;
    return S;
}

int main(){
    int val;
    cout<<"Enter number to find binary:";
    cin>>val ;
    cout<<"Number of Bits:"<<decTobin(val).n<<endl;
    cout<<"Binary of "<<val<<" is:"<<decTobin(val).bin<<endl;
    return 0 ;
}
