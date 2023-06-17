#include<iostream>
#include<vector>
using namespace std;
int main(){
    int i,sume=0,sumo=0;
    vector<int>vec(6);
    for(i=0;i<6;i++){
        cin>>vec[i];
    }
    for(i=0;i<6;i++){
        if(i%2==0){
            sume+=vec[i];
        }
        else{
            sumo+=vec[i];
        }
    }
    int sub=sume-sumo;
    cout<<sub<<endl;
    return 0;
}