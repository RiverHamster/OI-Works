#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int a[1005],n,m,d;
bool t[1005];
bool ok;
bool pd(int l){
	for (int i=2;i*i<=l;++i){
		if (l%i==0) return 1;
		}
	return 0;
	}
bool yes (int x,int y){
	for (int j=x-1;j>x-d;j--){
		y+=a[j];
		if (!pd(y)) return 0;
	}
	return 1;
}
void dfs(int i){
	if (i>m-n) {ok=1;return ;}
	for (int j=n;j<=m;++j){
		if (!t[j]&&yes (i,j)){
			t[j]=1;
			a[i]=j;
			dfs (i+1);
			t[j]=0;
	}
}
	return ;
}
int main(){
freopen ("aprime.in","r",stdin);
freopen ("aprime.out","w",stdout);
int t;
	scanf ("%d",&t);
	while (t--){
		memset (a,0,sizeof (a));
		//memset (t,0,sizeof (t));
		scanf ("%d%d%d",&n,&m,&t);
		ok=0;
		dfs (1);
		if (ok) {
			for (int i=1;i<=m-n;++i) printf ("%d ",a[i]);
			printf ("\n");
		}
		else printf ("None\n");
	}
return 0;
}