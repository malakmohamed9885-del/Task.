#include<iostream>
using namespace std;
int main(){
int num[]={3,6,9,12,15,18,21,24,27,30};
int numsize=sizeof(num)/sizeof(num[0]);
for(int i=numsize-1;i>-1;i--)
{
    cout<<num[i]<<"\n";
}
cout<<"===============================\n";
for(int i=numsize-1;i>-1;i--)
{
    if(num[i]%2!=0)
    cout<<num[i]<<"\n";
}
    return 0;
}