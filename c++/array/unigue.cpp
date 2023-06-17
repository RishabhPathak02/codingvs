#include<iostream>
using namespace std;
int main(){
    int array[]={2,3,1,3,2,4,1};
    int i,j;
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(array[i]=array[j]){
                array[i]=array[j]=-1;
            }
        }
    }
    for(i=0;i<10;i++){
        if(array[i]>0){
            cout<<array[i];
        }
    }
    return 0;
}