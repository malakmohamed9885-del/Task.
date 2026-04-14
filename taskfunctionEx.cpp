#include<iostream>
using namespace std;
void num(int nums[],int count)
{
    int result=0;
    for(int i=0;i<count;i++)
    {
        result+=nums[i];
    }
        cout<<"Result Is:"<<result;
    }
int main(){
int array[]={10,20,30,40,50,60,70,80,90} ;
int numcount=size(array);
num(array,numcount);
return 0;
}