#include<iostream>
using namespace std;
int main(){
int Number_One;
int Number_Two;
cout<<"Number One Is : \n";
cin>>Number_One; 
cout<<"Number Two Is : \n";
cin>>Number_Two;
cout<<"==========================\n";
if(Number_One<Number_Two)
{
    for(int i=Number_One+1;i<Number_Two;i++)
    if(i%2!=0)
    cout<<i<<"\n";
}
/*
             Test Case 1
     Number_One : 1
     Number_Two : 9
     Output : 3,5,7
             Test Case 2
     Number_One : 2
     Number_Two : 15
     Output : 3,5,7,9,11,13
*/
cout<<"==========================\n";
 if(Number_One>Number_Two)
{
    for(int i=Number_Two+1;i<Number_One;i++)
    if(i%2!=0)
    cout<<i<<"\n";
} 
/*          Test Case1
     Number_One : 8
     Number_Two : 2
     Output : 3,5,7
*/
 return 0;
}