#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
    cout<<"row and column";
    cin>>n>>m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
    if (i == 1 || i == n || j == 1 || j ==m){
             cout << j;

 }
 	else {
    cout << " ";
 } 

}         
     cout<<endl;
    }
}