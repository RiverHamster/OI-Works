#include <cstdio>
#include <cstring>
const int M=10005;
bool np[M], v[1001], ok;
int ans[1001], n, m, d;
void prime(){
    for (int i=2; i<=100; i++)
        if (!np[i]) 
            for (int j=i*i; j<M; j+=i)
                np[j]=1;
}
bool chk(int now, int x){
    if (now==0) return 1;
    int s=x;
    for (int i=1; i<d; i++){
        if (now-i<0) return 1;
        s+=ans[now-i];
        if (!np[s]) return 0;
    }
    return 1;
}
void out(){
	for (int i=0; i<=m-n; i++)
		printf("%d ", ans[i]);
	printf("\n");
}
void dfs(int dep){
    if (dep==m-n+1) {ok=1; out(); return ;}
    for (int i=n; !ok && i<=m; i++)
        if (!v[i] && chk(dep, i)){
            ans[dep]=i; v[i]=1; 
			dfs(dep+1); 
			v[i]=0;
        }            
}
int main(){
    freopen("aprime.in", "r", stdin);
    freopen("aprime.out", "w", stdout);
    prime();
    int t; scanf("%d", &t);
    while (t--){
		scanf("%d %d %d", &n, &m, &d);
        memset(v, 0, sizeof(v));
        ok=0; dfs(0);
        if (!ok) printf("None\n");
    }
    return 0;
}
