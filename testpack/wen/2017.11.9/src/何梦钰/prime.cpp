#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int a[10005];
int main()
{
	freopen("prime.in","r",stdin);
	freopen("prime.out","w",stdout);
	int t=0,x=1;
	scanf("%d",&t);
	a[0]=2;
	for (int i=3;i<=10005;i+=2){
		int w=1;
		for (int j=3;j*j<=i;j++){
			if (i%j==0){
				w=0;
				break;
			}
		}
		if (w==1) a[x++]=i;
	}
	for (int i=0;i<t;i++){
		int n,ans=0;
		scanf("%d",&n);
		for (int j=0;a[j]<=n;j++){
			int s=0;
			for (int k=j;a[k]<=n;k++){
				s+=a[k];
				if (s==n){
					ans++;
					break;
				}
				if (s>n){
					break;
				}
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}