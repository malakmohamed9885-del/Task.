#include<iostream>
using namespace std;
int main(){
         //Frinds Array
string frinds[]={"Ahmed","Osama","Ameer"};
int frindssize=sizeof(frinds)/sizeof(frinds[0]);
int i=0;
for(;i<frindssize;i++){
cout<<"\n=========\n"<<"="<<frinds[i]<<"=\n"<<"=========\n<<==";
int j=0;
for(;j<5;j++)
cout<<","<<frinds[i][j];
cout<<"=";
}
return 0;
}