#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<climits>
#include<cstdio>
#include<fstream>
using namespace std;
#define MAX  2174836474
typedef long long LL;
vector<bool> v(MAX,1);
vector<int> a;
void sieve()
{
	v[0]=v[1]=0;
	for(int i=2;i<=sqrt(MAX);i++)
		if(v[i]==1)
			for( long long j=i*i;j<MAX;j+=i)
				v[j]=0;

	for(int i=0;i<MAX;i++)
		if(v[i]==1)
			a.push_back(i);
}

int main()
{
	sieve();
	cout<<a.size()<<endl;

	return 0;
}
