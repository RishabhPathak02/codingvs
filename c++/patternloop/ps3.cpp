#include<iostream>
using namespace std;
int main(){
    int i,j,num;
    cin>>num;
    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            if(j==num/2){
                cout<<"*";
            }
            else if(i==num/2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}