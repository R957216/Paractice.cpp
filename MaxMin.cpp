#include<iostream>
#include<math.h>
using namespace std;

int getMaxMin(int num[] , int n){
  
  int mini= INT_MAX;

  for(int i=0;i<n;i++){
   max=max(max,num[i]);
   mini=min(mini,num[i]);


  }
   return max;
   return mini;
}

int main(){

  int size;
  cin>>size;

  int num[100];

  for(int i=0;i<size;i++){
    cin>>num[i];
  }
}