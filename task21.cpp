#include<array>
#include<iostream>
using namespace std;
int main(){
array<string,3>names={"Majed","Adel","Amr"};
if(names[0].size()==5)
cout<<names[0]<<"\n";
else if(names[1].size()==4) 
cout<<names[1]<<"\n";
else if(names[2].size()==3)
cout<<names[2]<<"\n";
else
cout<<"Not Condition Matched \n";
    return 0;
}
    