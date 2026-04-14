#include<iostream>
using namespace std;
int main(){
            //Examble 1
     int vals[]={100,200,250,400,200};
            //Exambel 2
     int vals1[]={100,200,500,400,200};
           //Examble 3
     int vals2[]={100,200,600,400,200};
 if(vals[0]+vals[4]>vals[2]) 
{                          
cout<<"first Number+Last Number Is Larger Than Middle Number \n"; 
cout<<vals[0]<<"+"<<vals[4] <<"="<<vals[0]+vals[4] <<"\n";    
cout<<vals[0]+vals[4]<<">"<<vals[2]<<endl;  
 }             
 else if(vals1[1]+vals1[3]>vals1[2])
 {
cout<<"Second Number+Before Last Number Is larger Than Middle Number \n";
cout<<vals1[1]<<"+"<<vals1[3]<<"="<<vals1[1]+vals1[3]<<"\n";
cout<<vals1[1]+vals1[3]<<">"<<vals1[2] <<endl;
 }
 else
    cout<<"Middle Number Is The Largest : "<<vals2[2]<<endl;
    return 0;
}