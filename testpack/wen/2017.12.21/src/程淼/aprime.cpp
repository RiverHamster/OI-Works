#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int a[25],t,n,m,d;
bool v[25],ok;
void out(int a[]){
    for (int i=1; i<=m-n+1; i++)
        printf("%d ", a[i]);
    printf("\n");
}
bool pdzs(int x){
	for (int i=2;i*i<=x;i++)
		if (x%i==0) return 1;
	return 0;
}
bool pd(int i,int sum){
	int k=i;
	for (int j=i-1;j>=1;j--){
		sum+=a[j];
		if (i-j>d) sum-=a[k--];
		if (!pdzs(sum)) return 0;
	}
	return 1;
}
void dfs(int i){
    if (i==m-n+2){
        out(a);ok=1;
    }
    else {
        for (int j=n;j<=m;j++){
            if (!v[j]&&pd(i,j)){
                a[i]=j;
				v[j]=1;
                dfs(i+1);
				if (ok) return;
                v[j]=0;
            }
		}
    }
}
int main(){
    freopen("aprime.in", "r", stdin);
    freopen("aprime.out", "w", stdout);
	scanf ("%d",&t);
	while (t--){
		scanf ("%d%d%d",&n,&m,&d);
		memset(v,0,sizeof(v));
		memset(a,0,sizeof(a));
		ok=0;
		for (int i=n;i<=m&&!ok;i++){
			a[1]=i;v[i]=1;
			dfs(2);
			v[i]=0;
		}
		if (!ok) printf ("None\n");
	}
    return 0;
}
