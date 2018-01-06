#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
bool tmp=1;
int t,n,m,d;
int a[10005]={0};
int l[10005]={0};
bool zs(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
bool pd(){
	for(int i=1;i<=d-1;i++){
		for(int j=n;j<=m-i;j++){
			long long ans=0;
			for(int aa=j;aa<=j+i;aa++){
				ans+=l[aa];
			}
			if(zs(ans)){
				return 0;
			}
		}
	}
	return 1;
}
void print(){
	for(int i=n;i<=m-1;i++){
		printf("%d ",l[i]);
	}
	printf("%d\n",l[m]);
}
void dfs(int c){
	if(c>m&&tmp){
		if(pd()){
			print();
			tmp=0;
			return;
		}
	}
	for(int i=n;i<=m;i++){
		if(a[i]==0){
			a[i]=1;l[c]=i;
			dfs(c+1);
			a[i]=0;
		}
	}
}
int main(){
	freopen("aprime.in",",r",stdin);
	freopen("aprime.out","w",stdout);
	scanf("%d",&t);
	while(t--){
		tmp=1;
		scanf("%d%d%d",&n,&m,&d);
		dfs(n);
		if(tmp) printf("None\n");
	}
	return 0;
}
