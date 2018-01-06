#include <cstdio>
#include <cstring>
const int d[8][2]={{0,-1},{-1,0},{0,1},{1,0},{-1,-1},{-1,1},{1,-1},{1,1}};
const int N=105;
int ans, n, m;
char g[N][N];
void dfs(int x, int y, int dr){
    if (g[x][y]=='.' && dr<4) ans++; //dr为0123表示水平和垂直方向，周长增加 
    else if (g[x][y]=='X'){
        g[x][y]='*';
        for (int i=0; i<8; i++)
            dfs(x+d[i][0], y+d[i][1], i);
    }
}
int main(){
    freopen("perimeter.in","r",stdin);
    freopen("perimeter.out","w",stdout);
    int t, x, y;
    scanf("%d", &t);
    while (t--){
        scanf("%d %d %d %d", &n, &m, &x, &y);
        memset(g, '.', sizeof(g));
        for (int i=1; i<=n; i++)
            scanf("%s", g[i]+1);
        ans=0;
        if (g[x][y]=='X'){
            g[x][y]='*';
            for (int i=0; i<8; i++)
                dfs(x+d[i][0], y+d[i][1], i);
        }
        printf("%d\n", ans);
    }
    return 0;
}
