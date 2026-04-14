#include<iostream>
using namespace std;
int main(){
    //output
//Array Is Palindrome
                       //Examble 1
int vals[]={100,200,600,200,100};
                       //Examble 2
int vals1[]{100,200,200,100};
                       //Examble 3
int vals2[]={100,300,600,200,100};                        
if(vals[0]==vals[4])
cout<<"Array Is Palindrome";
else if(vals1[1]==vals1[2])
cout<<"Array Is Palindrome";
else if(vals2[3]==vals2[3])
cout<<"Array Is Palindrome";
else
cout<<"Array Is Not Palindrome";
return 0;
}