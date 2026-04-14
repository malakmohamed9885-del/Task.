#include<iostream>
using namespace std;
int plusnums(int numone,int numtwo);
int minsnums(int numone,int numtwo);
int divnums(int numone,int numtwo);
int main(){
    cout<<plusnums(50,60)<<"\n";  //110
    cout<<minsnums(150,50)<<"\n";  //100
    cout<<divnums(100,5)<<"\n";    //20
    return 0;
}
int plusnums(int numone,int numtwo)
{
return numone+numtwo;
}
int minsnums(int numone,int numtwo)
{
return numone-numtwo;
}
int divnums(int numone,int numtwo)
{
return numone/numtwo;
}