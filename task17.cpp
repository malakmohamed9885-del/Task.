#include<Array>
#include<iostream>
using namespace std;
int main(){
array<int,6>nums={10,20,30,40,20,50};
//Method 1
cout<<"first: "<<nums[0]<<"\n";
cout<<"Last: "<<nums[5]<<"\n";
//Method 2
cout<<"first: "<<nums.at(0)<<"\n";
cout<<"Last: "<<nums.at(5)<<"\n";
//Method 3
cout<<"First: "<<nums.front()<<"\n";
cout<<"Last: "<<nums.back()<<"\n";
return 0;
}