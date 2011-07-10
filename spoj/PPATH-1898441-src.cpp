#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<queue>
#include<map>
#include<cstdio>
#include<cmath>
using namespace std;
bool cmp(int a,int b)
{
 int t=0;
 while(a!=0)
 {
   if((a%10)!=(b%10))
   t++;
   a/=10;
   b/=10;
 }
 if(t==1)
 return true;
 else return false;
}

int main()
{
  int T;
  cin>>T;
  vector<int> primes;
  bool a[10000];
  memset(a,1,10000);
  for(int i=2;i<sqrt(10000);i++)
  if(a[i]==1)
  for(int j=i*i;j<10000;j+=i)
  {
    a[j]=0;
  }
  a[0]=a[1]=0;
  for(int i=0;i<10000;i++)
  if(a[i]==1 && (i>=1000 && i<=9999))
  primes.push_back(i);
  int len=primes.size();
  while(T--)
  {
      int a,b,ret;
	  cin>>a>>b;
	  queue<int> q;
      q.push(a);
       map<int,int> m;
	   int f=0;
	   while(!q.empty())
       {
	     int top=q.front();
		 q.pop();
		  for(int i=0;i<len;i++)
		 {
		   if(cmp(top,primes[i]))
		   {
		      if(m.find(primes[i])==m.end())
			 { m[primes[i]]=m[top]+1;q.push(primes[i]);}
		      if(primes[i]==b)
			  {f=1;ret=m[primes[i]];break;}
		   }
		 }
	    if(f==1)
		{cout<<ret<<endl;break;}
	  }
	  if(f!=1)
      cout<<"Impossible"<<endl;	  
  }
  
}