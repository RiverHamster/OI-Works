#include <cstdio>
//const int N=45005;
//unsigned f[N], g[N];
int main(){
    freopen("energy.in", "r", stdin);
    freopen("energy.out", "w", stdout);
    /*f[1]=1; g[1]=3;
    for (int i=2; i<=45000; i++){
        f[i]=f[i-1]+2*i-1;
        g[i]=g[i-1]+3*i;
    }*/
    int n, t;
    scanf("%d", &t);
    while (t--){
        scanf("%d", &n);
        //printf("%u %u\n", f[n], g[n]);
        unsigned f=1u*n*n, g=n*(n+1)/2u*3;
        printf("%u %u\n", f, g);
    }
    return 0;
}
