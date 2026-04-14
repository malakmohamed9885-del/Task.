#include<iostream>
using namespace std;
int main(){
for(int i=0;i<=1000;i+=100){
    if(i==0)
    {
        continue;
    }
cout<<i<<"\n";
if(i==900)
{
    break;
}
}
    return 0;
}