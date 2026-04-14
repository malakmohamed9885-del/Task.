#include<iostream>
using namespace std;
int main(){
        //Frindes Array
string frinds[]={"Ahmed","Mohamed","ameer","Ashraf","Amany"};
int frindssize=sizeof(frinds)/sizeof(frinds[0]);
for(int i=0;i<frindssize;i++)
{
    if(frinds[i][0] =='A')
    cout<<frinds[i]<<"\n";
    }
cout<<"======================================\n";
int i=0;
while(i<frindssize)
{
    if(frinds[i][0]=='A')
cout<<frinds[i]<<"\n";
i++;
}
    return 0;
} 