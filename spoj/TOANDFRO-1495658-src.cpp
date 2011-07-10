#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
int n;
while(cin>>n && n!=0)
{
string t;
cin>>t;
int len=t.length();
int rows=len/n;
string s="";
       for(int i=0,j=0;i<rows && j<len;i++)
       {
        if(i%2==0)
        {int k;
          for( k=j;k<j+n;k++)
          s=s+t[k];
          j=k;          
        } 
        else
        {
         for(int k=j+n-1;k>=j;k--)
         s=s+t[k];
         j=j+n;
        }
       }
string ret="";
for(int i=0;i<n;i++)
{
        int k=i;
 for(int j=0;j<rows;j++,k+=n)
 {
  ret+=s[k];
 }
}       
cout<<ret<<"\n";
}
return 0;
}
