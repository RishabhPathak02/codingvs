#include<iostream>
#include<vector>
using namespace std;
int main(){
    int target,pair=0,i,j;
    vector<int>vec={3,4,6,7,1};
    cin>>target;
    for(i=0;i<6;i++){
        for(j=i+1;j<6;j++){
            if(vec[i]+vec[j]==target){
                pair++;
            }
        }
    }
    cout<<pair;
    return 0;
}
