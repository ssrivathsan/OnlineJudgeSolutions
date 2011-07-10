#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
//#include<conio.h>
using namespace std;
string sub(string a,string b)
{//It is assumed that a>b.You can easily modify the code if it not
 int bo=0;
 string ret,s="";
 int len1=a.length(),len2=b.length();
 for(int i=0;i<len1-len2;i++)
 b='0'+ b;
 for(int i=len1-1;i>=0;i--)
 {
  if(((a[i]-'0')-bo)>=(b[i]-'0'))//checks if a[i]>=b[i]
  {
   s=((char)(((a[i]-'0')-bo-(b[i]-'0'))+'0'))+s;
   bo=0;
  }
  else //takes borrow if it is not
  {
   s=((char)(10+(a[i]-'0')-bo-(b[i]-'0')+'0'))+s;
   bo=1;
  }
 }
 int len3=s.length();
 bo=0;
 //Code to Eliminate Leading Zeroes
 for(int i=0;i<len3;i++)
 {
  if(s[i]=='0' && bo==0)
  continue;
  else
  {
   ret+=s[i];
   bo=1;
  }
 }
 if(ret.length()==0)//Code to check if the result of subtraction is 0
 return "0";
 else
return ret;
}
string mul(string s1,int i)
{
int c=0,val;
string s="";
    for(int j=s1.length()-1;j>=0;j--)
    {
     val=s1[j]-'0';
     int d=val*i+c;
     //s.push_back(d%10+'0');     
     s=(char)(d%10+'0')+s;
     c=d/10;
    }
    while(c!=0)
    {
     //s.push_back(c%10+'0');
     s=(char)(c%10+'0')+s;
     c/=10;
    }
return s;
}
int main()
{
    string s;
    while(cin>>s)
    {
                 if(s=="0")
                 cout<<"0"<<"\n";
                 else if(s=="1")
                 cout<<"1"<<"\n";
                 else
                 {
                  cout<<mul(sub(s,"1"),2)<<"\n";

//                  cout<<sub(mul(s,2),"2")<<"\n";
                 }
    }
return 0;
}
