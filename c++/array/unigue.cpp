#include<iostream>
using namespace std;
int main(){
   cout<<"enter size of array"<<endl;
    int i,j;
    int size;
    cin>>size;
     int array[size];
     cout<<"enetr elements of array"<<endl;
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
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
            cout<<"                "<<uni;
        }
    }
    return 0;
}