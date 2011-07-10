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
int conv(string s)
{
int ret=0;
int len=s.length();
for(int i=0;i<len;i++)
{
ret=ret*10+(s[i]-'0');
}
return ret;
}
int main()
{
string s="m",num1,num2,num3,plus,equal;
int n;
cin>>n;
while(n--)
{

cin>>num1>>plus>>num2>>equal>>num3;
//string num1="3machula2";if((num1.find(s)!=num1.npos)) cout<<"HI"<<endl;
if(num1.find(s)!=num1.npos)
cout<<conv(num3)-conv(num2)<<" + "<<num2<<" = "<<num3<<endl;
if(num2.find(s)!=num2.npos)
cout<<num1<<" + "<<conv(num3)-conv(num1)<<" = "<<num3<<endl;
if(num3.find(s)!=num3.npos)
cout<<num1<<" + "<<num2<<" = "<<conv(num1)+conv(num2)<<endl;

//cout<<num1<<" "<<num2<<" "<<num3<<endl;
//cin>>s;


}
return 0;

}
