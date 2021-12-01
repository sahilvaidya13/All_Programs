#include <iostream>

using namespace std ;
//O(1) algorithm
//XORing between range
int XOR(int n){
    if(n%4==0){
    return n;     
    }else if(n%4==1){
        return 1 ;
    }else if(n%4==2){
        return 3 ;
        
    }else if(n%4==3){
        return 0 ;
    }
}

int main(){
    int numl,numr ;
    cout<<"Enter L: ";
    cin>>numl ;
    cout<<"Enter R: ";
    cin>>numr ;
    int LXOR = XOR(numl-1);
    int RXOR = XOR(numr);
    int res = LXOR^RXOR ;
    cout<<res<<endl ;
    return 0 ;
}
