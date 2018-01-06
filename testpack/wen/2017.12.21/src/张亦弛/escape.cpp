#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
char c[100010];
int main()
{
	freopen("escape.in","r",stdin);
	freopen("escape.out","w",stdout);
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		scanf("%s",c);
		int len=strlen(c);
		for (int j=0;j<len;j++)
			if (c[j]=='r')
				printf("%d ",j+1);
		for (int j=len-1;j>=0;j--)
			if (c[j]=='l')
				printf("%d ",j+1);
		printf("\n");
	}
	return 0;
}
