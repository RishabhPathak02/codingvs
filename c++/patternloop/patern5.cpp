#include<iostream>
using namespace std;
//logic:row:1 to n-1 tak
//column:1 to 2*i-1
int main(){
int i,j,n;
cout<<"Enter elements you want to print";
cin>>n;
for(i=1;i<=n;i++){
    for(j=1;j<=(n-i);j++){
        cout<<" ";
    }
    for(j=1;j<=(2*i-1);j++){
        cout<<"*";
    }
    for(j=1;j<=n-i;j++){
        cout<<" ";
    }
    cout<<endl;
}

}
