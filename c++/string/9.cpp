#include <iostream>
#include <string>
using namespace std;
int main(){
    int num=432;
    string str=to_string(num);//num to string conversion
    str+="1";
    cout<<str[3]<<endl;




    return 0;
}