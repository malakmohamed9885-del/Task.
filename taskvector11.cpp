#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<int>numbers={10,20,30,40};
numbers.pop_back();
numbers.erase(numbers.end()-1);
numbers.resize(size(numbers)-1);
for(int i:numbers)
cout<<i<<"\n";
    return 0;
}