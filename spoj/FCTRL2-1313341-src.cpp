#include<iostream> 
#include<algorithm>
#include<string>
#include<vector>
//#include<conio.h>
using namespace std;
 int main()
 {int n,t;
 cin>>t;
 while(t--)
 {
   cin>>n;
   string s1="1",s="",s2;
   int val=0,c=0;
   for(int i=1;i<=n;i++)
   {c=0;s="";
    for(int j=s1.length()-1;j>=0;j--)
    {
     val=s1[j]-'0';
     int d=val*i+c;
     //s.push_back(d%10+'0');     
     s=(char)(d%10+'0')+s;
     c=d/10;
    }
    while(c!=0)
    {
     //s.push_back(c%10+'0');
     s=(char)(c%10+'0')+s;
     c/=10;
    }
    //reverse(s.begin(),s.end());
   s1=s;
   }
   cout<<s1<<"\n";
  // getch();
}
  return 0;
 }
 
