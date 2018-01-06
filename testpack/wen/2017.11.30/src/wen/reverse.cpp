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
    }//inc�����¼���ӵĴ��ۣ�del�����¼���ٵĴ��ۣ�ʵ����ֻȡ���Сֵ���� 
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
    dp˼·�� 
    ��f[i][j]��ʾԭ�ַ�����i��j�Ѿ�ͨ��ĳ�ַ�ʽ�����Ϊ���ĵ���С���ۡ�
    ��ʼf[i][i]=0;
    ת�Ʒ��� f[i][j]=min{ f[i+1][j]+add[i],(��i+1..j��Ϊ����ʱ,��������һ��a[i]�ַ�) 
                          f[i+1][j]+del[i], 
                          f[i][j-1]+add[j],
                          f[i][j-1]+del[j],
                          f[i+1][j-1](�� a[i]==a[j]ʱ)  }
    ���Ľ�Ϊf[0][m-1] 
    */
