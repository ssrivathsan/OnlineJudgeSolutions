#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdio>
#include<map>
using namespace std;
int main()
{
int T;
cin>>T;
while(T--)
{
	int n;
	cin>>n;
	vector<string> v(n);
	for(int i=0;i<n;i++)
	    cin>>v[i];
	sort(v.begin(),v.end());
	int f=0;
	for(int i=0;i<n;i++)
	{
	    if((i+1)<n && v[i+1].substr(0,v[i].size())==v[i])
	    {f=1;break;}
	}
	if(f==1)
	    cout<<"NO"<<endl;
	else cout<<"YES"<<endl;

}
return 0;
}
