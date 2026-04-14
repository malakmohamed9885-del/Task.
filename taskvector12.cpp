#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<int>nums={5,4,3,2,1};
reverse(nums.begin(),nums.end());
sort(nums.begin(),nums.end());

for(int i:nums)
{
    cout<<i<<"\n";
}

return 0;
}