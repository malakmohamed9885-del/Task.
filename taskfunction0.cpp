#include<iostream>
using namespace std;
int result=0;
void calc(int num[],int count)
{
for(int i=0;i<count;i++)
result+=num[i];
cout<<"result is : "<<result;
}
int main(){
int Array[]={20,30,40,50};
int sizenum=size(Array);
calc(Array,sizenum);
    return 0;
}