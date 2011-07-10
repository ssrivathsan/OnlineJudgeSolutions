#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
 int n,m=0,temp=5;//temp 5 for actual code
 cin>>n;
 /*while(n>0)
 {
   
   if(n%5==0)
   {
    temp=n;
    while(temp%5==0)
    {
     m++;
     temp/=5;
    }
   n-=5;
  }else
   n--;
 }*/
 while(temp<=n)
 {
  m+=n/temp;
  temp*=5;
 }
cout<<m<<"\n";
}
return 0;
}
