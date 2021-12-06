#include <iostream>
using namespace std ;

int main(){
  int n ;
  cout<<"enter n"<<endl ;
  cin>>n ;
  int currentsum = 0 ;
  int currentloop = 0 ;
  int i = 1 ;
  int h = 0 ;
  do{
    currentloop = currentloop + i ;
    currentsum = currentsum + currentloop ;

    i++ ;
    h++ ;
  }while(currentsum<=n) ;
  
int fn = h - 1 ;
cout<<fn ;

  }
  
