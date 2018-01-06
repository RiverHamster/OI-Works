#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
char a[100005];
int main()
{
	freopen("escape.in","r",stdin);
	freopen("escape.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		scanf("%s",a);
		for(int j=0;j<strlen(a);j++)
			if(a[j]=='r')
				printf("%d ",j+1);
		for(int j=strlen(a)-1;j>=0;j--)
			if(a[j]=='l')
				printf("%d ",j+1);
		a[100005]={' '};
		printf("\n");
	}
	return 0;
}

