#include<iostream>
using namespace std;
int main(){
    int i,j,n,m=1;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=n;j>=1;j--){
            if(i%2!=0){
            cout<<m;
            m++;
            }
            else{
                cout<<" ";
                m+=2;
                if(j%2==0){
                    cout<<m;
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;

}