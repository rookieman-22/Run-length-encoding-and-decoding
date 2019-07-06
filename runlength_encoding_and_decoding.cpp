#include<iostream>
#include<string>
using namespace std;
int main()
{
   string s;char c;
   int count=1;
   cout<<"Press e for encode and d for decode ";
   cin>>c;
   if(c=='e')
   {
    cout<<"Enter string: ";
    cin>>s;
   for(int i=0;i<s.length();i++)
   {
       if(s[i]==s[i+1])
       {
           count=count+1;
       }
       else
       {
           cout<<count<<""<<s[i];
           count=1;
       }
   }
   }
   else{
    cout<<"Enter string: ";
    cin>>s;
    for(int j=0;j<s.length();j=j+2)
    {
       int x=(int)s[j]-48;
       for(int i=0;i<x;i++)
       {
           cout<<s[j+1];
       }
    }

   }
}
