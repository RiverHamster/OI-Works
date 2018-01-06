#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
int l[8000];
int zs(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int work(){
	int k=1;
	for(int i=2;i<=10000;i++){
		if(zs(i)){
			l[k]=i;
			k++;
		}
	}
	k--;
	return k;
}
int main(){
	freopen("prime.in","r",stdin);
	freopen("prime.out","w",stdout);
	int n,t,x;
	n=work();
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("%d",&x);
		int ans=0,k=1;
		for(int i=1;l[i]<=x;i++){
			k=i;
		}
		for(int i=1;i<=k;i++){
			int s=0,j;
			for(j=i;s<=x;j++){
				if(s==x) ans++;
				s+=l[j];
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
