#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
const int N=1e5+10;
vector<int>fre(N,0);
  for(int i=0;i<n;i++){
    fre[v[i]]++;
  }

    cout<<"ENter queries"<<endl;
    int q;
    cin>>q;
    while(q--){
        int querry;
        cin>>querry;
        cout<<fre[querry]<<endl;
    }
     

}