#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<int>numbers;
vector<float>floats(100);

 numbers.assign(100,1000);
fill(floats.begin(),floats.end(),100.5f);

cout<<numbers.at(0)<<"\n";     //1000
cout<<numbers.at(99)<<"\n";    //1000

cout<<floats.at(0)<<"\n";       //100.5
cout<<floats.at(99)<<"\n";      //100.5
    return 0;
} 