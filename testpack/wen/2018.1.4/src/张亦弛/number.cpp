#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
char c[100010];
int main()
{
	freopen("number.in","r",stdin);
	freopen("number.out","w",stdout);
	int t,n;
	scanf("%d",&t);
	while (t--)
	{
		int total=0;
		scanf("%d",&n);
		scanf("%s",c);
		int len=strlen(c);
		for (int i=0;i<len;i++)
			total+=c[i]-'0';
		total=n-total;
		if (c<=0)
		{
			cout<<0<<endl;
			continue;
		}
		int m=0;
		for (int i=0;i<=len;i++)
			if (c[i]-'0'>=n)
				break;
			else
				m++,n-='9'-c[i];
		printf("%d\n",m);
	}
}
