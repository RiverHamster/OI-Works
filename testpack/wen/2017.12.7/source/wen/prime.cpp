#include <cstdio>
const bool p[40]={0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,
                  0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0};
int a[25], ans, n, k;
bool v[25];
void out(int a[]){
    for (int i=1; i<=n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
void dfs(int i){//ÊÔÌ½ÌîÐ´µÚi¸öÊý 
    if (i==n+1){ 
        if (p[a[n]+a[1]]){
            ans++;
            if (ans<=k) out(a);
        }
    }
    else {
        for (int j=3-(a[i-1]%2)/*2*/; j<=n; j+=2)
            if (!v[j] && p[j+a[i-1]]){
                a[i]=j; v[j]=1;
                dfs(i+1);
                v[j]=0;
            } 
    }
}
int main(){
    freopen("prime.in", "r", stdin);
    freopen("prime.out", "w", stdout);
    scanf("%d %d", &n, &k);
    a[1]=1; v[1]=1; dfs(2);
    printf("%d\n", ans);
    return 0;
}
