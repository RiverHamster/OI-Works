#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	int t;
	scanf("%d",&t);
	for (int i=0;i<t;i++){
		int n,min=100050,x;
		long long s=0;
		scanf("%d",&n);
		for (int j=0;j<n;j++){
			scanf("%d",&x);
			if (x<min) 
				min=x;
			s+=x;
		}
		printf("%u\n",s+min);
	}
	return 0;
}
