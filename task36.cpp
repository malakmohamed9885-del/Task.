#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<103;i++){
    if(i<=10)
    cout<<"00"<<i<<"\n";
    else if(i<=20)
      cout<<"0"<<i<<"\n";
   else if(i>20)
    cout<<i<<"\n";
    }
    return 0;
}