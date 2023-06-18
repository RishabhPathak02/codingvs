#include<iostream>
#include<vector>
using namespace std;
int main(){
 vector<int>vec={1,3,2,5,4,6,7,2,7,2,7};
 int max=INT16_MIN;
 int secmax=INT16_MIN;
 for(int i=0;i<vec.size();i++){
    if(vec[i]>max){
        max=vec[i];
    }
 }
 for(int i=0;i<vec.size();i++){
    if(vec[i]>secmax&&vec[i]!=max){
        secmax=vec[i];
    }
 }

 cout<<secmax<<endl;

 return 0;
}