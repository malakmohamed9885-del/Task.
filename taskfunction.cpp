#include<iostream>
using namespace std;
void calc(int num_one,int num_two,string op)
{
    if(op=="+")
            {
                cout<<num_one<<"+"<<num_two<<"="<<num_one+num_two<<"\n";
            }
    else if(op=="-")
            {
                cout<<num_one<<"-"<<num_two<<"="<<num_one-num_two<<"\n";
            }
    else if(op=="*")
            {
                cout<<num_one<<"*"<<num_two<<"="<<num_one*num_two<<"\n"; 
            }
    else 
            {
                cout<<num_one<<"/"<<num_two<<"="<<num_one/num_two<<"\n";
            }
        }
int main(){
          calc(50,20,"+");
          calc(30,20,"-");
          calc(70,20,"*");
          calc(40,20,"/");
return 0;
}            
