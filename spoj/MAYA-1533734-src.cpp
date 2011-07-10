#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
int val(string s)
{
int ret=0,dots=0,hyphens=0;
dots=count(s.begin(),s.end(),'.');
hyphens=count(s.begin(),s.end(),'-');
ret=5*hyphens+dots;
return ret;
}
int main()
{
    string s;
    int n;
    while(cin>>n && n!=0)
    //while(1)
    {  getline(cin,s);
              int ret=0,t=1; 
       vector<int> v;
       for(int i=0;i<n;i++)
       {
        getline(cin,s);
        v.push_back(val(s));
       }
      int len=v.size();
       for(int i=len-1;i>=0;i--)
       {
         if(i==len-3)
         t=360;
         ret+=v[i]*t;
         t*=20;
         
       }
     cout<<ret<<"\n";
    }
return 0;
}
