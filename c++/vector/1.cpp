#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    for(int i=0;i<5;i++){
        int ele;
        cin>>ele;
        vec.push_back(ele);
    }
    for(int ele:vec){
    cout<<ele;
    }
    cout<<endl;
    vec.erase(vec.begin()+2);
    vec.insert(vec.begin()+2,5);//can be used withouterasing the element.
    for(int i:vec){
    cout<<i<<endl;
    }
    
}