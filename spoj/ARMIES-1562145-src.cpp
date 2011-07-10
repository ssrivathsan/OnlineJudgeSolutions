#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int cmp(int a,int b)
{
 if(a>b)
	 return 1;
 else if(a<b)
	 return 0;
}
int main()
{
	int testcases;
	scanf("%d",&testcases);//cin>>testcases;
	while(testcases--)
	{
		int bdiv,mdiv,t;
		scanf("%d",&bdiv);
        //cin>>bdiv;
		vector<int> barmy(bdiv);
		for(int i=0;i<bdiv;i++)
			scanf("%d",&t),barmy[i]=t;
                scanf("%d",&mdiv);//cin>>mdiv;
		vector<int> marmy(mdiv);
		for(int i=0;i<mdiv;i++)
			scanf("%d",&t),marmy[i]=t;
                sort(barmy.begin(),barmy.end(),cmp);
		sort(marmy.begin(),marmy.end(),cmp);
		bool f=0;
		int i,j;
		for(i=0,j=0;i<bdiv && j<mdiv;)
		{
			if(barmy[i]>marmy[j]){f=1;printf("Bajtocja\n");break;}
			else if(marmy[j]>barmy[i]){f=1;printf("Megabajtolandia\n");break;}
			else {i++;j++;}
		}
		if(f==0)
		{
			if(i==bdiv)
			{
				if(j==mdiv) printf("Draw\n");
				else printf("Megabajtolandia");
			}
			else printf("Bajtocja\n");
		}
	}
return 0;
}
