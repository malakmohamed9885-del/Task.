#include<iostream>
using namespace std;
int main(){
string frindes[]={"Ahmed","Mohamed","Sayed","Gamal"};
int numsize=sizeof(frindes)/sizeof(frindes[0]);
for(int index=1;index<numsize-1;index++)
{
cout<<frindes[index]<<"\n";
}
    return 0;
}