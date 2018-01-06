#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <iostream>
using namespace std;
int main ()
{
	freopen("escape.in","r",stdin);
	freopen("escape.out","w",stdout);
	int n,len;
	scanf("%d",&n);
	char a[100005];
	while(n--)
	{
		scanf("%s",&a);
		len=strlen(a);
		for(int i=0;i<len;i++) 
			if(a[i]=='r') printf("%d ",i+1);
		for(int i=len-1;i>=0;i--)
		    if(a[i]=='l') printf("%d ",i+1);
		    printf("\n");
	}
	return 0;
}

