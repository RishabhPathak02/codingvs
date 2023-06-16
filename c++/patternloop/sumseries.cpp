#include<iostream>
using namespace std;
int main(){
    int num,result,sum=0;
    cin>>num;
    for(int i=1;i<=num;i++){
        if(i%2==0){
        sum-=i;
    }
    else{
        sum+=i;
    }
    
    }
    cout<<sum;
    return 0;

}