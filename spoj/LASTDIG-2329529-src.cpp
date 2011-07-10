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
   long long a ,b;
   cin>>a>>b;
   vector<int> v;
   //v.push_back(1);
   int t=a%10;
   v.push_back(t);
   for(int i=0;i<b;i++)
   {
      t=(t*a)%10;
	  if(find(v.begin(),v.end(),t)!=v.end())
	  break;
	  else v.push_back(t);
	 
   }
   /*for(int i=0;i<v.size();i++)
   cout<<v[i]<<".....";
   cout<<endl;*/
   if(b==0)
   cout<<1<<endl;
   else
   cout<<v[(b-1)%v.size()]<<endl;
   }
return 0;
}
