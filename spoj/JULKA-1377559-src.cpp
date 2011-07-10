#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
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
string div2(string a)
{
string ret,tmp="0";
int rem = 0;
    for(int i = 0;i < a.size();i++)
    {   
   
        tmp[0] = (rem*10 + a[i]-'0')/2 + '0';
        rem = (a[i]-'0') % 2;
        ret += tmp;
    }
    if( ret[0] == '0' )
    ret = ret.erase(0,1);

return ret;
}

int main()
{
string a,b;
while(cin>>a>>b)
{
  string x=div2(sub(a,b));
  cout<<sub(a,x)<<"\n";
  cout<<x<<"\n";
}
}
