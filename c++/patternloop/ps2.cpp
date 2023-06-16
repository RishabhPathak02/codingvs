#include<iostream>//IMPORTANT
using namespace std;
int main(){
    int i,j,num;
    int x=65;
    
    cin>>num;
    for(i=1;i<=num;i++){
        for(j=1;j<=(num-i);j++){
            cout<<" ";

        }
        for(j=0;j<(2*i-1);j++){
char r=char(x+j);
            cout<<r;

        }
        cout<<endl;
        
    }
    for(i=num+1;i<=(2*num-1);i++){
        for(j=1;j<=(i-num);j++){
            cout<<" ";
        }
        for(j=0;j<(2*(2*num-i)-1);j++){
            char r=char(x+j);
            cout<<r;
            
        }
        cout<<endl;
        

    }
    return 0;
}