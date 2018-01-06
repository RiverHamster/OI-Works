#include <stdio.h>
inline int mn(int a, int b){ 
    return a < b ? a : b; 
} 
int main(){
    freopen("pearls.in","r",stdin);
    freopen("pearls.out","w",stdout);
    int p, n, sum[102]={0}, v[102], f[102]={0};
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        scanf("%d %d", &p, &v[i]);
        sum[i]=sum[i-1]+p;
    }
    for (int i=1; i<=n; i++){
        f[i]=(sum[i]+10)*v[i];
        for (int k=0; k<i; k++)
            f[i]=mn(f[k]+(sum[i]-sum[k]+10)*v[i], f[i]);
    }    
    printf("%d\n", f[n]);          
    return 0;
}
//f[i]记录买到第i种珍珠所需要的最少钱数
//f[i]=全部用第i种珍珠买，或k+1~i种珍珠用第i种珍珠来买的较小值 
