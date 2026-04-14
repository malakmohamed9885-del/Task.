#include<Array>
#include<iostream>
using namespace std;
int main(){
array<int,6>nums={10,20,30,40,20,50};
//Method 1
cout<<nums.size()<<endl;
//Method 2
cout<<sizeof(nums)/sizeof(nums[0])<<endl;
//Method 3
cout<<end(nums)-begin(nums)<<"\n";
//بتشاور على مكان بعد اخر عنصر:end
// begin:     تشيرالى مكان اول عنصر
return 0;
}