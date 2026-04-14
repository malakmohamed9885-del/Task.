#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<int>numbers={10,20,10,40,50};
vector<int>::iterator iter=numbers.begin();
for(int i=0;i<numbers.size();i++)
{
    cout<<numbers[i]<<"\n";
}
cout<<"===================\n";
for(int num:numbers)
{
    cout<<num<<"\n";
}
    return 0;
}