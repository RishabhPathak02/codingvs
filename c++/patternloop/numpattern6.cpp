#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
    cout<<"row and column";
    cin>>n>>m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(i%2!=0){
                if(j%2!=0){
                    cout<<"1";
                }
                else{
                    cout<<"2";
                }
            }
            else{
                 
                if(j%2!=0){
                    cout<<"2";
                }
                else{
                    cout<<"1";
                }
            }
        }
        cout<<"\n";
    }
 }
