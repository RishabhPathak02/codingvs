#include<iostream>
#include<vector>
using namespace std;
int main(){
int i,j=0,x,m;
vector<int>vec(5);
cout<<"enetr vector elements"<<endl;
for(i=0;i<6;i++){
    cin>>vec[i];
}
cout<<"enter value of x"<<endl;
cin>>x;
for(i=0;i<6;i++){
    if(vec[i]>x){
        j++;
    }
}
cout<<"value of elements greater thn x=>"<<j<<endl;
return 0;
}