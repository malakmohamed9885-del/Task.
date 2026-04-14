#include<iostream>
using namespace std;
int main(){
string names[]={"Osama","Ahmed","Mahmoud","Hager","Eman","Salwa"};
int numsize=sizeof(names)/sizeof(names[0]);
for(int i=0;i<numsize;i++)
if(names[i].size()==5)
cout<<names[i]<<"\n";
    return 0;
}