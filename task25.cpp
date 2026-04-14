#include<iostream>
using namespace std;
int main(){
int nums[]{0,2,4,6,8,14,16,18};
int numsize=sizeof(nums)/sizeof(nums[0]);
for(int index=0;index<numsize;index++)
{
    cout<<nums[index]<<"\n";
}
cout<<"==================================\n";
int index=0;
while(index<numsize)
{
    cout<<nums[index]<<"\n";
    index++;
}
return 0;
}