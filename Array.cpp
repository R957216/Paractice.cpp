#include<iostream>
using namespace std;
/*int Array(int N1[3], int N2[4]){
  //int N1[10]={1,2,3};
  //int N2[3]={3,2,1};
  return N1[1]+N2[3];
  cout<<endl;

}

int main(){
 int a[2]={1,2};
 int b[3]={3,4};

  int ans= Array(a[2],b[3]);
  cout<<ans;
}*/
/*int main(){
  int first[5]={[0. . . 4 ]=3};
int n=5;
for(int i=0;i<=n-1;i++)
  cout<<first[i]<<" ";
}*/

/*int main(){
  int size=10;
  int value;
  cout<<"Enter the number for Array initialization :"<<" "<<endl;;
  cin>>value;
  int Array[size];

  for(int i=0;i<size;i++){
       Array[i]=value;
  }
   
  cout<<"print Array :" ;
  for(int i=0;i<size;i++){
    cout<< Array[i]<<" ";
  }
  return 0;
}*/
  void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
      cout<<"Array"" = "<<arr[i]<<endl;

    }
    cout<<"printing Done"<<endl;
  }

int main(){
  int first[3]={1,2,2};
  printArray(first,3);

  int second[]={3,4,5,6,6,78,78,};

  printArray(second,123455);
}

