#include<iostream>
using namespace std;
//function signature
/*void printCounting(int n){
  //function body
  for(int i=1;i<=n;i++){
    cout<< i << " ";
  }
  cout<<endl;
}

int main(){
  int Num;
  cin>>Num;

  printCounting(Num);

  return 0;
  }*/
  /*#include <iostream>
  using namespace std;

  bool isPrime(int n){
    for(int i=2;i<n;i++){
       if(n%i==0){
         return 0;
       }
    }
    return 1;
  
  }

  int main(){
    int n;
    cout<<"Enter the Number ";
    cin>>n;

  if(isPrime(n)){
  cout<<"Is  a prime number";
  }

 else
  cout<<"Is Not a prime Number";
  }*/
   
   //power function
  /* #include<iostream>
   using namespace std;
   int power(){
     int a,b;
     cin>>a>>b;
    int ans=1;

    for(int i=1;i<=b;i++){
    ans=ans*a;
    }
    return ans;
   }

   int main(){
    

     int n1=power();
     cout<<"power"" = "<< n1 <<endl;
      int n2=power();
     cout<<"power"" = "<< n2 <<endl;      int n3=power();
     cout<<"power"" = "<< n3 <<endl;


   }*/

/*bool isEven(){
  int n;
  cin>>n;
  if(n&1)//It gives odd number
  {
  return 0;
  }
  return 1;
}

int main(){
  
  if(isEven()){
       cout<<"Even number";
 }
 else{
   cout<<"Odd Number";
 }
}*/

//NCR problem= N!/r!*(n-r)!
// if we give n and r than find ncr value;
/*int fact(int n){
  int ans=1;
  for(int i=1;i<=n;i++){
    ans=ans*i;
  }
  return ans;
}
int nCr(int n,int r){
  int num= fact(n);
  int denom=fact(r)*fact(n-r);
 return num/denom;

}

int main(){
  int N,R;
  cout<<"Enter the value of N and R : ";
  cin>>N>>R;

 int ans=nCr(N,R);

 cout<<"Ncr"" = "<<ans<<endl;
 return 0; 
}*/
// A.P=3*n+7
/*int ap(int n)
{
  int ans=3*n+7;
  return ans;
}

int main(){
  int N;
  cin>>N;
 int ans= ap(N);
 cout<<ans<<endl;
}*/

/*int update(int a){
  int ans = a * a;
  return ans;
}
int main(){
  int a=14;
  a=update(a);
  cout<< a << endl;
}*/



