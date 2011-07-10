#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<cstring>
//#include<conio.h>
using namespace std;
int comp(string s,string t)
{
    int len1=s.length(),len2=t.length();
int maxi=max(len1,len2);
s.length();
for(int i=0;i<maxi-len1;i++)
s="0"+s;
for(int i=0;i<maxi-len2;i++)
t="0"+t;
if(s>t)
return 1;
else 
return 0;

}
int main()
{
    int T;
    cin>>T;
while(T--)
{
          string s,n;
          cin>>s;
          n=s;
          int len=s.length();
          if(len==1)
          {
           if(s[0]!=9+'0')
           cout<<(char)(s[0]+1)<<"\n";
           else
           cout<<"11"<<"\n";
          }
          else
          {
            while(1)
            {
                    len=s.length();
             int m,j=len/2-1;
             string t=s;
             if(len%2==0)
             m=len/2;
             else
             m=(len/2)+1;
             for(int i=m;i<len && j>=0;i++,j--)
             s[i]=s[j];
             
             if(comp(s,t) ||comp(s,n))
             {
              cout<<s<<"\n";
              break;
             }
             else
             {
              if(len%2==0)
              m=len/2-1;
              else
              m=len/2;
              int c=0,val;
              val=s[m]-'0'+1;
              c=val/10;
               s[m]=val%10 + '0';
              while(c!=0)
              {
               m--;
               if(m>=0)
               {
                       val=s[m]-'0'+c;
                       c=val/10;
                       s[m]=val%10 + '0';
               }
               else if(m<0)
               {
                     s=((char)(c+'0'))+s;
                     break;
               }
              }
              /*cout<<"......."<<s<<"\n";/*len=s.length();  
              j=len/2-1;      
              if(len%2==0)
             m=len/2;
             else
             m=(len/2)+1;
             for(int i=m;i<len && j>=0;i++,j--)
             s[i]=s[j];*/
             }
             
            }
          }
}
return 0;
}
