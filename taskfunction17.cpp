#include<iostream>
using namespace std;
int pricing(int numphon,int numphonuse,int pric,int present)
{
 int numphonnew=numphon-numphonuse;
 int price=(numphonnew*pric)+(numphonuse*(pric-200)) ;
 int pre=(price*present)/100;
 return price-pre;
}
int main()
{
  cout << pricing(50, 10, 800, 20) << "\n"; // 30400
  return 0;
}