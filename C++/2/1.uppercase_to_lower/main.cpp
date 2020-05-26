#include <iostream>
using namespace std;

int main()
{
   char ch;
   cout<<"Enter a character in lowercase: ";
   cin>>ch;
   cout<<"Entered character in lowercase: "<<ch;
   cout<<" , ASCII: "<<int(ch)<<endl;
   ch=ch-32;
   cout<<"Entered character in uppercase: "<<char(ch);
   cout<<" , ASCII: "<<int(ch)<<endl;
   return 0;
}
