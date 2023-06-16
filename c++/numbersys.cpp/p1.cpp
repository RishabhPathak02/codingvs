#include<iostream>
using namespace std;
int main(){
    int i,j,num,sum=0;//binary to decimal
    cin>>num;
    for(i=0;i<2;i++){
        j=num%10;
        sum+=j*2^i;
      
    }
    cout<<sum;
}