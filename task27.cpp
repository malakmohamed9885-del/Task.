#include<iostream>
using namespace std;
int main(){
int nums[]{10,100,10000,100000000};
int numsize=sizeof(nums)/sizeof(nums[0]);
for(int i=0;i<numsize;i++)
{
  cout<<nums[i]<<"\n";
}
cout<<"================================\n";
int i=0;
while(i<numsize)
{
  cout<<nums[i]<<"\n";
  i++;
}
return 0;
}