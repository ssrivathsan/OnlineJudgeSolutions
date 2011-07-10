#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
string addstr(string a ,string b)
{
 int len1=a.length(),len2=b.length(),c=0;
 string ret="";
 int m=max(len1,len2);
 for(int i=0;i<m-len1;i++)
 a='0'+a;
 for(int i=0;i<m-len2;i++)
 b='0'+b;
 int s;
 for(int i=m-1;i>=0;i--)
 {
   s=(a[i]-'0'+b[i]-'0'+c);
   ret=(char(s%10+'0'))+ret;
   c=s/10;
 }
 while(c!=0)
{ret=char(c+'0')+ret;c/=10;}
return ret;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
              //cout<<addstr("503","497")<<"\n";
     string a,b;
     int i;
     cin>>a>>b;
     reverse(a.begin(),a.end());
     reverse(b.begin(),b.end());
     i=0;
     while(a[i]=='0')
     i++;
     a.erase(0,i);
     i=0;
     while(b[i]=='0')
     i++;
     b.erase(0,i);
     
     string ret=addstr(a,b);
     reverse(ret.begin(),ret.end());
     i=0;
     while(ret[i]=='0')
     i++;
     ret.erase(0,i);
     cout<<ret<<"\n";
    }
return 0;
}
