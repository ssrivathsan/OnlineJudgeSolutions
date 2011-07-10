#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<string>
using namespace std;
int main()
{
int sqr=(int)(sqrt(1000000000)+1);
vector<bool> pri(sqr+10);
for(int i=0;i<sqr;i++)
pri[i]=true;
int sqr1=sqrt(sqr+2)+1;
for(int i=2;i<=sqr1;i++)
{
 if(pri[i]==true)
 {
  for(int j=i;j*i<=sqr;j++)
  pri[j*i]=false;
 }
}
pri[0]=pri[1]=false;
vector<int> prime;
for(int i=0;i<sqr;i++)
{
if(pri[i]==true)
prime.push_back(i);
}
int n,sz=prime.size()-1;
cin>>n;
while(n--)
{
int a,b;
cin>>a>>b;
if(a>b)
swap(a,b);
vector<int>::iterator k=lower_bound(prime.begin(),prime.end(),a);
if(b<=sqr)
{
 for(;*k<=b;k++)
 {
  cout<<*k<<endl;
 }
 if(n!=0)
 cout<<"\n";
continue;
}
vector<bool> arr(b-a+1);
int sqr2=sqrt(b);
for(int i=0;i<=b-a;i++)
arr[i]=true;
for(int i=0;i<sz && prime[i]<=sqr2;i++)
{
 int crt=prime[i],j;
 if(a%crt == 0 )
              j = a / crt;
       else
       j = a / crt + 1; 
       if(j == 1)
       ++j;       
 for(;j*crt<=b;j++)
 arr[j*crt-a]=false;
}
int sz1=b-a+1;
for(int i=0;i<sz1;i++)
if(arr[i] && i+a!=1)
cout<<i+a<<endl;
if(n!=0)
cout<<"\n";
}
return 0;
}
