#include<iostream>
using namespace std;
int main(){
    int num;
        cout<<"Enter The numper :";
    cin>>num;
    switch(num)
    {
        case 10:
        cout<<"case 1";
        break;
        case 19 ... 21:
        cout<<"case 2";
        break;
        case 29 ... 33:
        cout<<"case 3";
        break;
        default:
        cout<<"Invalid Number";
    }
    return 0;
}
 //  * if(num>19 && num<21)   =>  (switch (num))  * case 19 ... 21
// ========================================================================================================
                         //switchفى قاعدة  
 // *   case   بنكتب الرقم الاول وى نسيب مسافه وى نعمل 3 نقاط(...) وى نسيب مسافه وى نكتب الرقم الثانى