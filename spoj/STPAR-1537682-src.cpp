#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<stack>
using namespace std;
int main()
{
int n;
while(cin>>n && n!=0)
{
vector<int> v;
int t;
for(int i=0;i<n;i++)
{
cin>>t;
v.push_back(t);
}
stack<int> s;
int flag=1;
for(int i=1;i<=n;i++)
{
        int f=0;
                            /*cout<<"contents of vector at "<<i<<" \n";
                            for(int k=0;k<v.size();k++)
                            cout<<v[k]<<" ";*/
                            
                                
 for(int j=0;j<v.size();)
 {
  if(v[j]==i)
  {//cout<<"\n"<<i<<") element erased found"<<v[j]<<"\n";
   v.erase(v.begin()+j);
   f=1;
   break;
  }
  else if(s.size()!=0 && s.top()==i)
  {
   s.pop();j++;
   f=1;
   break;
  }
  else
  {//cout<<"\n"<<i<<") element erased pushed"<<v[j]<<"\n";
      s.push(v[j]);
      v.erase(v.begin()+j);
  }
 }
 //if(s.size()!=0)
 //cout<<"stack top after i "<<i<<" "<<s.top()<<"\n";
if(f==0)
{
        if(s.top()==i)
        {s.pop();continue;}
        else
        {flag=0;break;}
}
}
if(flag==0)
cout<<"no"<<"\n";
else
cout<<"yes"<<"\n";
}
return 0;
}
