#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    vec.push_back(1);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    vec.push_back(2);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    vec.push_back(3);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    vec.push_back(4);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    vec.push_back(5);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    vec.resize(10);
     cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    vec.pop_back();
      cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
     vec.clear();
      cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;



}