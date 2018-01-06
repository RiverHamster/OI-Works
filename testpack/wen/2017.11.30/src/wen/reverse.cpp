#include <cstdio>
const int N=2005;
const int M=1<<30;
int f[N][N], del[30], inc[30], c[30];
char a[N], ch[2];
inline int mn(int a, int b){ 
	return a>b ? b : a; 
}
int main(){
    freopen("reverse.in","r",stdin);
    freopen("reverse.out","w",stdout);
    int m, n, s;
    scanf("%d %d", &n, &m);
    scanf("%s\n", a);
    for (int i=0; i<n; i++){
        scanf("%s", ch);
        scanf("%d %d", &inc[ch[0]-'a'], &del[ch[0]-'a']);
        c[ch[0]-'a']=mn(inc[ch[0]-'a'], del[ch[0]-'a']);
    }//inc数组记录增加的代价，del数组记录减少的代价，实际上只取其较小值即可 
    for (int k=1; k<m; k++){
        for (int i=0; i<m-k; i++){
            int j=i+k, s=M;
            if (a[i]==a[j] && f[i+1][j-1]<s) s=f[i+1][j-1];
            if (f[i+1][j] + c[a[i]-'a']<s) s=f[i+1][j] + c[a[i]-'a'];
            if (f[i][j-1] + c[a[j]-'a']<s) s=f[i][j-1] + c[a[j]-'a'];
            f[i][j]=s;
        }
    }
    printf("%d\n", f[0][m-1]);
    return 0;
}
    /*
    dp思路： 
    令f[i][j]表示原字符串从i到j已经通过某种方式处理成为回文的最小代价。
    初始f[i][i]=0;
    转移方程 f[i][j]=min{ f[i+1][j]+add[i],(当i+1..j成为回文时,在最后添加一个a[i]字符) 
                          f[i+1][j]+del[i], 
                          f[i][j-1]+add[j],
                          f[i][j-1]+del[j],
                          f[i+1][j-1](当 a[i]==a[j]时)  }
    最后的解为f[0][m-1] 
    */
