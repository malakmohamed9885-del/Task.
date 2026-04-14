#include<iostream>
using namespace std;
int sumall(int nums[],int count,int noneed )
{
    int result=0;
    for(int i=0;i<count;i++)
    {
    if(nums[i]==noneed)
    {
    continue;
    }
    result+=nums[i];
    }
    return result;
}
int main()
{
int Numbers[]={13,20,3,30,5,7,40,13};
int numssize=size(Numbers);
int noneed=13;
cout<<sumall(Numbers,numssize,noneed);
return 0;
}