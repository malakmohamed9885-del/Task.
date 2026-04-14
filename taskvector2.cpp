#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>numbers={10,20,30,40};
vector<int>::iterator last=numbers.end()-1;
cout<<numbers.at(0)<<"\n";  //10                     //10
cout<<numbers.front()<<"\n";  //10                   //10
cout<<numbers[0]<<"\n";       //10                   //10
cout<<*numbers.begin()<<"\n";   //10                 //10

cout<<numbers.at(numbers.size()-1)<<"\n";  //40                  //40   
cout<<numbers.back()<<"\n";    //40                  //40
cout<<numbers[numbers.size()-1]<<"\n";  //40          //40
cout<<*last<<"\n";            //40
    return 0;
}