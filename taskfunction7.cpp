#include<iostream>
using namespace std;
int berforeresult(int num1,int count)
{
int result=0;
for(int i=0;i<=count;i++)
 result+=num1-i;
 
 return result;   
}
int main(){

cout<<berforeresult(10,5)<<"\n";

cout<<berforeresult(15,3)<<"\n";
return 0;
}