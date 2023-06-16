#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter width";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n+2;j++){
            cout<<j;
        }
        cout<<endl;
    }
}