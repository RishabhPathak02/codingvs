#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3,s4;
    cout<<"Enter length of sides";
    cin>>s1>>s2>>s3>>s4;
    if(s1==s2){
        if(s3==s4){
            cout<<"square";

        }
        else if(s3!=s4){
            cout<<"rectangle";
        }
    }
    else{
        cout<<"enter proper size";
    }
    return 0;
}