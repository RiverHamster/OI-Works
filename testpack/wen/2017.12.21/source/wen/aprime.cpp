#include <cstdio>
#include <cstring>
const int M=10005;
bool np[M], vis[1001], ok;
int ans[1001], n, m, d;
void prime(){
    for (int i=2; i<=100; i++)
        if (!np[i]) 
            for (int j=i*i; j<M; j+=i)
                np[j]=1;
}
bool chk(int now, int x){
    if (now==0) return true;
    int s=x;
    for (int i=1; i<d; i++){
        if (now-i<0) return true;
        s+=ans[now-i];
        if (!np[s]) return false;
    }
    return true;
}
void out(){
	for (int i=0; i<=m-n; i++)
		printf("%d ", ans[i]);
	printf("\n");
}
void dfs(int dep){
    if (dep==m-n+1) {ok=true; out(); return ;}
    for (int i=n; !ok && i<=m; i++)
        if (!vis[i] && chk(dep, i)){
            ans[dep]=i; vis[i]=true; 
			dfs(dep+1); 
			vis[i]=false;
        }            
}
int main(){
    freopen("aprime.in", "r", stdin);
    freopen("aprime.out", "w", stdout);
    prime();
    int t; scanf("%d", &t);
    while (t--){
		scanf("%d %d %d", &n, &m, &d);
        memset(vis, false, sizeof(vis));
        ok=false; dfs(0);
        if (!ok) printf("None\n");
    }
    return 0;
}
