#include<iostream>
#include<vector>
using namespace std;
int largest(int array[],int size){
    int max=INT8_MIN;
    int maxindex=-1;
    for(int i=0;i<size;i++ ){
        if(array[i]>max){
            max=array[i];
            maxindex=i;
        }
    }
    return maxindex;
}
int main(){

int array[]={2,3,5,7,6,1,7};
int n=7;
int largestindex=largest(array,n);
//cout<<" \t"<<array[largestindex]<<endl;//largest element

int largestnum=array[largestindex];
for(int i=0;i<n;i++){
    if(array[i]==largestnum){
        array[i]=-1;
    }
}
int secondlargestindex=largest(array,n);
cout<<"\t"<<array[secondlargestindex]<<endl;//second largest element

    return 0;
}