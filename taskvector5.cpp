#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<int>number={10,20,30,40,50,60,10,80};
int check=10;
//int countone=0;
int counttwo=0;
int countone=count(number.begin(),number.end(),check);
cout<<countone<<"\n";
for(int i=0;i<number.size();i++)
{
    if(number[i]==check)
    counttwo++;
}
    cout<<counttwo<<"\n";
    return 0;
}