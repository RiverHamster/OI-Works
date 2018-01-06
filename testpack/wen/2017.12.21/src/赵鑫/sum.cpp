#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	int t;
	scanf("%d",&t);
	int n,y,minn=100000,sum=0;
	for(int i=1;i<=t;i++){
		scanf("%d",&n);
		sum=0;
		for(int j=1;j<=n;j++){
			scanf("%d",&y);
			if(y<minn) minn=y;
			sum+=y;
		}
		sum+=minn;
		printf("%d\n",sum);
	}
	return 0;
}
