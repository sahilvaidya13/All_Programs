#include <iostream>
using namespace std;

int binarysearch(int arr[],int n,int key){
  int s = 0 ; 
  int e = n ; 

  while(s<=e){
    int mid = (e+s)/2 ;

    if(arr[mid]==key){
      return mid ;
    } else if(arr[mid]>key){
      e = mid-1 ;
    }else{
      s = mid+1 ;
    }

  }
  return -1 ;
}

int main(){
  int n ;
  int arr[n] ;
  cout<<"enter length of array"<<endl ;
  cin>>n ;
  cout<<"enter values in array"<<endl ;

  for(int i=0;i<n;i++){
    cin>>arr[i] ;
  }

  int key ;
  cin>>key ;

  cout<<binarysearch(arr,n,key) ;
  return 0 ;
}
