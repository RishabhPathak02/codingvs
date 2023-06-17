#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec(9);
    int i,n=0,m;
    for(i=0;i<=9;i++){
        cin>>vec[i];}
         for(i=0;i<9;i++){

        if(vec[i]<vec[i+1]){
            n++;
        }
    }
    if(n==vec.size()){
        cout<<"array is sorted"<<endl;
    }
return 0;
}