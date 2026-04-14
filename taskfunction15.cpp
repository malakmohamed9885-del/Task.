#include<iostream>
using namespace std;
 float avg(int money[],float count)
 {
  int result=0;
  for(int i=0;i<count;i++)
    result+=money[i];
      return result/count; 
 }
     int main()
{
  int money[] = { 10, 20, 15, 25, 30, 35 };
  int monsize = size(money);
  cout << avg(money, monsize) << "\n"; // 22.5
  return 0;
}
 