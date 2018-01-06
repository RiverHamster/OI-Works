#include <cstdio>
//#include <cstring>
inline int mn(int a, int b){
    return a<b ? a : b;
}
int main(){
    freopen("additive.in","r",stdin);
    freopen("additive.out","w",stdout);
    int t;
    scanf("%d", &t);
    while (t--){
        int m, a[30], f[1010]={0};
        scanf("%d", &m);
        //memset(f, 0, sizeof(f));
        for (int i=0; i<m; i++)
            scanf("%d", &a[i]);
        int sum=0;
        f[0]=1;
        for (int i=0; i<m; i++){
            for (int j=mn(1000, sum+a[i]); j>=a[i]; j--)
                if (f[j-a[i]])
                    f[j]+=f[j-a[i]];
            sum+=a[i];
            if (sum>=1000) sum=1000;
        }
        sum=0;
        for (int i=0; i<m; i++)
            sum+=f[a[i]]-1;
        printf("%d\n", sum);
    }
    return 0;
}
