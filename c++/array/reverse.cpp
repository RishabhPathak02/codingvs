#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5,6,7,8,9};
    int n=vec.size();
    int i,j,k;
    cin>>k;
    k%=n;
    reverse(vec.begin(),vec.end());
    for(i=0;i<n;i++){
    cout<<vec[i]<<"\t";
    }
    cout<<endl;
    reverse(vec.begin(),vec.begin()+k);
     for(i=0;i<n;i++){
    cout<<vec[i]<<"\t";
    }
      cout<<endl;
    reverse(vec.begin()+k,vec.end());
     for(i=0;i<n;i++){
    cout<<vec[i]<<"\t";
    }


    
}