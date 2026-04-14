#include<iostream>
#include<algorithm>
using namespace std;
int firstnegative(int nums[],int count)
{
    int maxnum=-10;
    for(int i=0;i<count;i++)
    {
    if(nums[i]<0)
    
    maxnum=max(maxnum,nums[i]);
        }
return maxnum;
}
int main(){
    int numbers[]={-10,-20,15,100,10,5,-50,0,-5,-10}; //-5
int numsize=size(numbers);
cout<<firstnegative(numbers,numsize);
return 0;
}