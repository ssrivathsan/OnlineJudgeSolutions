#include<iostream>
#include<algorithm>
#include<cstdio>
#include<vector>
using namespace std;
int main()
{
	long long cases;
	scanf("%lld",&cases);
	vector<long long>  v(cases);
	int i=0;
	while(cases--)
	{
		scanf("%lld",&v[i]);
		i++;
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++)
	{
		printf("%lld\n",v[i]);
		/*
		 * int j=i;
		while(j<v.size() && v[j]==v[i])
			j++;
		j--;
		i=j;
		*/
	}
	return 0;

}
