#include<iostream>
using namespace std;
int main(){
int num[]={10,20,14,28,40,80,15,30};
int numsize=sizeof(num)/sizeof(num[0]);
int i=0;
for(;i<numsize;i++)
{
if(num[i]+num[i]==num[i+1])

    cout<<num[i]<<"\n";
} 
    return 0;
}