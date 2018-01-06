#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
string s;
int n;
int main()
{
	freopen("escape.in","r",stdin);
	freopen("escape.out","w",stdout);
	scanf("%d",&n);
	while(n--)
	{
		cin>>s;
		int len=s.size();
		for(int i=0;i<len;i++)
			if(s[i]=='r')
				printf("%d ",i+1);
		for(int i=len-1;i>=0;i--)
			if(s[i]=='l')
				printf("%d ",i+1);
		printf("\n");
	}
}
