#include<iostream>
using namespace std;
int calcspecial(int numone,int numtwo)
{
 if(numone==numtwo)
    {
   cout<<"First=Second:"<<numone<<"+"<<numtwo<<"=";
    return numone+numtwo;
    }
else if(numone>numtwo)
    {
    cout<<"First>Second:"<<numone<<"-"<<numtwo<<"=";
    return numone-numtwo;
    }
else
{
    cout<<"First<Second:"<<numtwo<<"-"<<numone<<"=";
    return numtwo-numone;
}    
}
int main(){
cout<<calcspecial(40,40)<<"\n";
cout<<calcspecial(200,50)<<"\n";
cout<<calcspecial(100,300)<<"\n";
return 0;
}