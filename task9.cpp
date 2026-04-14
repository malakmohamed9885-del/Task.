#include<iostream>
using namespace std;
int main()
{
                     //Exambel 1
int check=25;
int nums[]{40,20,30,70,100};
if (nums[0]>check)
{
    nums[0]+=nums[3];
    cout<<"nums = "<<nums[0]<<"\n";
}
                      //Exambel 2
int nums1[]={40,20,30,70,100};
if(nums1[1]>check)
{
    nums[1]+=nums1[3];
    cout<<"nums1  = "<<nums1[1]<<"\n";
}
                      //Exambel 3
 int nums2[]={20,25,30,70,100};                     
if(nums2[2]>check)
{
    nums2[2]+=nums2[4];
    cout<<"nums2  = "<<nums2[2];
}                      
return 0;
}