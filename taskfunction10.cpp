#include<iostream>
#include<algorithm>
using namespace std;
int num;
int minpositive(int nums[],int counter)

{
    int i=0;
    for(int i=0;i<counter;i++)
    {
if(nums[i]>0)
num+=nums[i]; 
} 
if(num<nums[i])   
 cout<< nums[i];  
    
}
int main(){
int ArrayNumber[]={-10,-20,15,100,10,5,-50,0}; 
int numssize=size(ArrayNumber);
cout<<minpositive(ArrayNumber,numssize);
//cout<<num;
    return 0;
}