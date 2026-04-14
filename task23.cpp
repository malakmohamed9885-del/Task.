#include<iostream>
using namespace std;
int main(){
int nums[]{2,3,4,5,6,7,8,9,10};
int numsize=sizeof(nums)/sizeof(nums[0]);
int index=0;
for(;;)        
{
cout<<nums[index]<<"\n";
index++;
if(index==7)
{
break;
}
}
return 0;
}