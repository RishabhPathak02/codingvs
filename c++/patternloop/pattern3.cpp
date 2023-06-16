#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter row";
    cin>>n;
    for(i=1;i<=n;i++){
        for(int j=1;j<=i;j+=1){
            cout<<"*";
        }
        cout<<endl;
    }

}