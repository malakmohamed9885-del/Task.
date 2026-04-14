#include<iostream>
using namespace std;
int main(){
int help_num=4;
int num[]={2,4,5,6,10};
int numsize=sizeof(num)/sizeof(num[0]);
for(int i=numsize-numsize,j=numsize-1;i<numsize;i++,j--)
//for(int j=numsize-1;j>i;j--)
cout<<num[i]<<"+"<<num[j]<<"="<<num[i]+num[j]<<"\n";
return 0;
}