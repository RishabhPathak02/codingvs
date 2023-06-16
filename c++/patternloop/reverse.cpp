#include<iostream>
using namespace std;
int main(){
    int i,j,num,rev=0;
    cin>>num;
    while(num>0){
        int rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    cout<<rev;
    return 0;

    

    }
