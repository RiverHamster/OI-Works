#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	freopen("outlet.in","r",stdin);
	freopen("outlet.out","w",stdout);
	int t;
	scanf("%d",&t);
	for (int i=0;i<t;i++){
		int k,s=1,x;
		scanf("%d",&k);
		for (int j=0;j<k;j++){
			scanf("%d",&x);
			s+=(x-1);
		}
		printf("%d\n",s);
	}
	return 0;
}