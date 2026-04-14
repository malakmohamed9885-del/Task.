#include<iostream>
using namespace std;
int main(){
int help_num=4;
int nums[]={2,4,5,6,10};
int numsize=sizeof(nums)/sizeof(nums[0]);
int i=numsize-numsize;
for(;i<numsize;i++)
{
  // int first=nums[i];
int last=nums[numsize-1-i];
cout<<nums[i]<<"+"<<last<<"="<<nums[i]+last<<"\n";
}
return 0;
}