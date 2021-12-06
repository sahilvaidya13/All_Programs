#include <iostream>
using namespace std ;

int main(){
  int temp ;
int arr[5] = {50,80,10,30,5} ;
for(int i=0;i<5;i++){
  for(int j=i+1;j<6;j++){
      if(arr[j]<arr[i]){
          temp = arr[j] ;
          arr[j] = arr[i];
          arr[i] = temp ;
      }
  }
}
for(int k=0;k<5;k++){
  cout<<arr[k]<<endl ;
}
}
