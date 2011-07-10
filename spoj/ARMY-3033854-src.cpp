#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<cstdio>
#include<stack>
#include<queue>
#include<sstream>
#include<set>
#define MAX 600000
using namespace std;
int main()
{
int T;
cin>>T;
while(T--)
{
int ng,nm;
cin>>ng>>nm;
if(ng==0 && nm==0){
cout<<"uncertain"<<endl;continue;}
vector<int> a(ng),b(nm);
for(int i=0;i<ng;i++)
scanf("%d",&a[i]);
for(int i=0;i<nm;i++)
scanf("%d",&b[i]);
sort(a.begin(),a.end());
sort(b.begin(),b.end());
int len1=a.size(),len2=b.size();
for(int t1=0,t2=0;;)
{
	if(t1==len1){cout<<"MechaGodzilla"<<endl; break;}
	if(t2==len2){cout<<"Godzilla"<<endl;break;}
	if(a[t1]==b[t2] ||a[t1]>b[t2])
	t2++;
	else if(a[t1]<b[t2]) t1++;
}
}
return 0;
}
