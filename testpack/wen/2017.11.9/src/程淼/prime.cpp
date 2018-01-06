#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int t,n,k,a[5000],ans;
bool pdzs(int x){
	for (int i=2;i*i<=x;i++)
		if (x%i==0) return 0;
	return 1;
}
int main(){
	freopen("prime.in","r",stdin);
	freopen("prime.out","w",stdout);
	scanf ("%d",&t);
	for (int i=2;i<=10000;i++)
		if (pdzs(i)) a[++k]=a[k-1]+i;
	while (t--){
		scanf ("%d",&n);
		ans=0;
		int i,j;
		for (i=k;a[i]>=n;i--){
			for (j=0;a[i]-a[j]>n;j++);
			if (a[i]-a[j]==n) ans++;
		}
		printf ("%d\n",ans);
	}
	return 0;
}
