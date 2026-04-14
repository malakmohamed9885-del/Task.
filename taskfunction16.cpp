#include<iostream>
using namespace std;
int books(int aree1,int aree2,int aree3,int space4)
{
    int space1=aree1*2;
    int space2=aree2*4;
    int space3=aree3*6;
    int spacefor4=space4*20;
    int space=space1+space2+space3;
     if(spacefor4>space)
   return spacefor4-space;
   else
   return 0;
}
int main()
{
  cout << books(10, 4, 3, 4) << "\n"; // 26
  cout << books(10, 4, 3, 2) << "\n"; // 0
  return 0;
}