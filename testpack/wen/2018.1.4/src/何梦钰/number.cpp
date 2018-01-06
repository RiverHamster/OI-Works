#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
char a[100005];
int main()
{
	freopen("number.in","r",stdin);
	freopen("number.out","w",stdout);
	int t;
	scanf("%d",&t);
	for (int i=0;i<t;i++){
		int k,s=0,x;
		scanf("%d\n",&k);
		gets(a);
		for (int j=0;a[j]!='\0';j++){
			s=s+a[j]-48;
		}
		if (s>=k) printf("%d\n",0);
		else {
			for (int j=0;a[j]!='\0';j++){
				k=k-(a[j]-48);
			}
			x=k/10+1;
			printf("%d\n",x);
		}
	}
	return 0;
}
