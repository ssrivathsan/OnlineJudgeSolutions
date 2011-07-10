#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
//#include<conio.h>
#include<string>
using namespace std;
int main()
{
   int T;
   cin>>T;
   while(T--)
   {
   int n;
   
   cin>>n;
   vector<string> s(n);
   for(int i=0;i<n;i++)
   cin>>s[i];
   sort(s.begin(),s.end());
   for(int i=0;i<n;i++)
   cout<<s[i]<<endl;
   }
return 0;
}
