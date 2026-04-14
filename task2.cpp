#include<iostream>
using namespace std;
int main(){
int by=82;                     //by=>Birth
int S=500;                     //S=>Salary
//cout<<(by>80)?"ok \n":"Not ok \n";
//cout<<(S<600)?"ok \n":"High \n";
string status=by>80?(S<600?"ok":"High"):"Not ok";
cout<<"Status ="<<status<<"\n";
return 0;
}