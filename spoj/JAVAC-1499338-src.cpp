#include<iostream>
#include<cctype>
#include<string>
using namespace std;

int javaorc(string s)
{
 int und=0,caps=0;
 int len=s.length();
 for(int i=0;i<len;i++)
 {
  if(s[i]>='A' && s[i]<='Z')
  caps++;
  else if(s[i]=='_')
  und++;
 }
if(und>0 && caps>0)
return -1;
else if(und>0)
return 1;
else return 0;
}
int main()
{
string s;
while(cin>>s)
{
              int f=javaorc(s),len=s.length();
              string ret="";
              if(f==-1)
              cout<<"Error!\n";
              else if(f==1)
              {
                   if(s[0]=='_' || s[len-1]=='_')
                   {cout<<"Error!\n";continue;}
               for(int i=0;i<len;i++)
               {
                if(s[i]=='_')
                {
                 if(s[i+1]=='_')
                 {ret="Error!";break;}
                ret+=toupper(s[++i]);
                
                }
                else
                ret+=s[i];
                /*if(s[i-1]=='_')
                {ret="Error!";break;}*/
                
               }
               cout<<ret<<"\n";
              }
              else
              {
                  if(isupper(s[0]))
                  {cout<<"Error!\n";continue;}
                  
               for(int i=0;i<len;i++)
               {
                if(isupper(s[i]))
                {
                 ret+="_";
                 ret+=tolower(s[i]);
                }
                else
                ret+=s[i];
               }
              cout<<ret<<"\n";
              }
              
}
return 0;
}
