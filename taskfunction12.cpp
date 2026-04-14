#include<iostream>
using namespace std;
string createurl(string proto,string doma,string extension, bool www=true)
{
  if(www==true) 
  {
    return proto + "://www . " + doma + "." + extension;
  }
  else
  {
    return proto + "://" + doma + "." + extension;
  } 
 } 

int main()
{
  cout << createurl("https", "elzero", "org") << "\n"; // https://www.elzero.org
  cout << createurl("https", "google", "com", false) << "\n"; // https://google.com
  cout << createurl("http", "learn", "net") << "\n"; // http://www.learn.net

return 0;
}