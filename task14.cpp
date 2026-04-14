#include<iostream>
using namespace std;
int main(){
    //Creat The Array Here
    string names[][3]=
    {
       {"Ahmed","Sayed","Mahmoud"},
       {"Sameh","Mahdy","Gamal"} ,
       {"Mohamed","Adel","Majed"}
    };
cout<<"First Collection Of Names : \n";
cout<<names[0][0]<<endl;          //Ahmed
cout<<names[1][1]<<endl;          //Mahdy
cout<<names[2][2]<<endl;          //Majed  
cout<<"Second Collection Of Names : \n";
cout<<names[2][1]<<endl;         //Adel
cout<<names[1][2]<<endl;         //Gamal
cout<<names[0][2]<<endl;         //Mahmoud
cout<<"Third Collection Of Names : \n";
cout<<names[0][1]<<endl;         //Sayed
cout<<names[1][0]<<endl;         //Sameh
cout<<names[2][0]<<endl;         //Mohamed
return 0;
}