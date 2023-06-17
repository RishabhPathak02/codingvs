#include<iostream>
using namespace std;
int main(){
    int array[]={2,3,1,3,2,4,1};
    int i,j;
    int size=7;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(array[i]==array[j]){
                array[i]=array[j]=-1;
            }
        }
    }
    for(i=0;i<size;i++){
        if(array[i]>0){
            int uni=array[i];
            cout<<uni;
        }
    }
    return 0;
}