#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	
	int cases;
long long int k;
	cin>>cases;
	while(cases--)
	{
		cin>>k;
		cout<<(192+(250*(k-1)))<<"\n";
	}
	return 0;
}
