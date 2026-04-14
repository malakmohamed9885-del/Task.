#include<iostream>
using namespace std;
int plusandmultiply(int nums[],int count)
{
    int EvenNumbers=0;
    int OddNumbers=1;
    int Total;
    for(int i=0;i<count;i++)
    {
    if(nums[i]%2==0)
    {
    EvenNumbers+=nums[i];
   //cout<<"Even Numbers : "<<EvenNumbers<<"\n";
    }
    else if(nums[i]%2!=0)
    {
    OddNumbers*=nums[i]; 
   // cout<<"Odd Numbers : "<<OddNumbers<<"\n";
    } 
}
    Total=EvenNumbers+OddNumbers;
     cout<<"Even Numbers : "<<EvenNumbers<<"\n";
     cout<<"Odd Numbers : "<<OddNumbers<<"\n";
    return Total;

   }
int main()
{
int numbers[]={10,20,3,30,5,7,40};
int numsize=size(numbers);
cout<<plusandmultiply(numbers,numsize)<<"\n";
//int Total=EvenNumbers+OddNumbers;
 //cout<<Total;
return 0;
}