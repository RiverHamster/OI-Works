#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	freopen("energy.in","r",stdin);
	freopen("energy.out","w",stdout);
	int t;
	scanf("%d",&t);
	for (int i=0;i<t;i++){
		int n;
		scanf("%d",&n);
		printf("%u %u\n",n*n,(1+n)*n/2*3);
	}
	return 0;
}