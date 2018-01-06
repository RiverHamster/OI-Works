#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	freopen("elephant.in","r",stdin);
	freopen("elephant.out","w",stdout);
	int t;
	scanf("%d",&t);
	for (int i=0;i<t;i++){
		int n,x=0,a=0,b=0,c=0;
		scanf("%d",&n);
		a=n/10;
		b=(n-a*10)/5;
		c=(n-a*10-b*5)/1;
		x=a+b+c;
		printf("%d\n",x);
	}
	return 0;
}
