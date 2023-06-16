#include<iostream>
using namespace std;
int main(){
  int i,j,n;
cin>>n;
  for(i=0;i<n;i++){
    for(j=0;j<=i;j++){
      if(j<=i){
      cout<<i+j+1;
      }
      else{
        cout<<" ";
      }

    }
    cout<<endl;
  }
    
    
      return 0;

}