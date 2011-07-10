#include<iostream>
#include<algorithm>
#include<string>
#define OUT(x) cout<<#x<<"  "<<x<<endl;
using namespace std;
        /*
        x + (x + b) = a
        x = a-b /2
       
        x+y = a
        y = a - x
         */
       


string sub(string a,string b)
{
int borrow = 0,i;
string tmp;
       if( a.size() == b.size() )
        if ( a < b )
        {
            tmp = a;
            a = b;
            b = tmp;
        }
   
   
    reverse(a.begin(),a.end());   
    reverse(b.begin(),b.end());
   

   
    for(i = 0;i < a.size();i++)   
    {
        if( i < b.size() ) a[i] -= (b[i] - '0') ;
       
        a[i] -= borrow;
       
        borrow = 0;
        if( a[i] < '0' )
        {
            a[i] += 10;
            borrow = 1;       
        }
       
    }
   
    reverse(a.begin(),a.end());
    if( a[0] == '0' )
    a.erase(0,1);

return a;
}

string div2(string a)
{
string ret,tmp="0";
int rem = 0;
    for(int i = 0;i < a.size();i++)
    {   
   
        tmp[0] = (rem*10 + a[i]-'0')/2 + '0';
        rem = (a[i]-'0') % 2;
        ret += tmp;
    }
    if( ret[0] == '0' )
    ret = ret.erase(0,1);

return ret;
}

int main()
{
int test=10;


   
    while(test--)
    {   
        string a,b,tmp;
        cin>>a>>b;
       
        if ( a.size() < b.size() )
        {
            tmp = a;
            a = b;
            b = tmp;
        }
        string y = div2( sub(a,b) );
        string x =  sub(a,y);
      int i = 0;
      while(i < x.size() && x[i] == '0')
                 i++;
      for(; i < x.size(); ++i)
            cout << x[i];
      cout<<endl;
      i = 0;
      while(i < y.size() && y[i] == '0')
                 i++;
      for(; i < y.size(); ++i)
            cout << y[i];
       
        cout<<endl;
        
    }

return 0;
}
