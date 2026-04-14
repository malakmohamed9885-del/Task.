#include<iostream>
using namespace std;
string greeting(string name,string titel="unknown" )
{
  if(titel=="Male") 
  
   return "Hello Mr "+ name;
  
  else if(titel=="Female") 
  
  return "Hello Miss "+ name;
  
else

return "Hello " + name;

}
int main()
{
  cout << greeting("Osama", "Male") << "\n"; // Hello Mr Osama
  cout << greeting("Eman", "Female") << "\n"; // Hello Miss Eman
  cout << greeting("Sameh") << "\n"; // Hello Sameh
  return 0;
}