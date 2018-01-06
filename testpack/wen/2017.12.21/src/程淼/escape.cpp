#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int t,l,r;
int a[100005];
char s[100005];
int main(){
	freopen("escape.in","r",stdin);
	freopen("escape.out","w",stdout);
	scanf ("%d",&t);
	while (t--){
		memset(s,0,sizeof(s));
		scanf ("%s",s);
		int len=strlen(s);
		l=0;r=len-1;
		for (int i=0;i<len;i++)
			if (s[i]=='l') a[r--]=i+1;
			else a[l++]=i+1;
		for (int i=0;i<len;i++)
			printf ("%d ",a[i]);
		printf ("\n");
	}
	return 0;
}
