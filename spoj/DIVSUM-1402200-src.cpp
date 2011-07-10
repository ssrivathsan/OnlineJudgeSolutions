#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
//#include<conio.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
{
int n;
cin>>n;
int sum=1;
if(n==1)
{
 cout<<"0"<<"\n";
 continue;
}
for(int i=2;i*i<=n;i++)
{
 if(n%i==0)
 {
  sum+=i;
  if((n/i)!=i)
  sum+=(n/i);
 }
}
cout<<sum<<"\n";
}
return 0;    
}
