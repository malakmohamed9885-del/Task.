#include<iostream>
using namespace std;
float mony(float salary,int day)
{
    int week=(salary/7)*2;
    return salary/(day-week);
}
int main(){
cout<<mony(2015,21)<<"\n";    //134.333
cout<<mony(4500,40)<<"\n";    //150
return 0;
}