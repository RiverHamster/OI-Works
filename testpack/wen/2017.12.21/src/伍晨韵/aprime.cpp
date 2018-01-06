#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int t,n,m,d;
bool v[1005],flag;
int a[1005];
bool pd(int p){
	if(p==0 || p==1) return 0;
	bool ok=0;
	for(int i=2; i*i<=p; i++)
	    if(p%i==0){ok=1;break;}
	return ok;
}
bool yes(){
	for(int i=2; i<=d; i++){
		for(int j=1; j<=m-n+1; j++){
			int sum=0;
			for(int k=j; k<=j+i-1; k++){
				if(k>m-n+1) break;
			    sum+=a[k];
			}
			if(!pd(sum)) return 0;
		}
	}
	return 1;
}
void output(){
	for(int i=1; i<=m-n+1; i++)
		printf("%d ",a[i]);
	printf("\n");
	return;
}
void dfs(int now){
	if(flag) return;
	if(now==m-n+2 && !flag && yes()){
		flag=1;
		output();
		return;
	}
	if(flag) return;
	for(int i=n; i<=m && !flag; i++){
		if(flag) return;
		if(i==n){
			if(!v[i]){
			    v[i]=1; a[now]=i; 
			    //if(flag) return;
	    	    dfs(now+1);
	    	    //if(flag) return;
	    	    v[i]=0; a[now]=0;
	    	    //if(flag) return;
	    	}
	    }
	    else if(!v[i] && pd(i+a[now-1])){
	    	//if(flag) return;
	    	v[i]=1; a[now]=i; 
	    	dfs(now+1);
	    	//if(flag) return;
	    	v[i]=0; a[now]=0;
	    	//if(flag) return;
	    }
	    if(flag) return;
	}
	return;
}
int main(){
	freopen("aprime.in","r",stdin);
	freopen("aprime.out","w",stdout);
	scanf("%d", &t);
	while(t--){
		scanf("%d%d%d", &n, &m, &d);
		flag=0;
		memset(v,0,sizeof(v));
		memset(a,0,sizeof(a));
		dfs(1);
		if(!flag) puts("None");
	}
	return 0;
}
