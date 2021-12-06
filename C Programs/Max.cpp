#include <iostream>
using namespace std ;

int main(){
  int n ;
  cout<<"enter array\n" ;
  cin>>n ;
  int array[n] ;

  for(int i=0;i<5;i++){
    cin>>array[i] ;
  }

  int max = array[0] ;
  for(int j=0;j<5;j++){
    if(array[j]>max){
      max = array[j] ;
    }
 }
    cout<<"maximum is"<<max<<endl ;
    return 0 ;
}
