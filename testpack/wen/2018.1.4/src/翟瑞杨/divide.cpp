#include <cstdio>
#include <cstring>
bool b[50005];
int main(){
    freopen("divide.in", "r", stdin);
    freopen("divide.out", "w", stdout);
    int t;
    scanf("%d", &t);
    while (t--){
        int n;
        memset(b, 0, sizeof(b));
        scanf("%d", &n);
        b[0]=1;
        int sum=0, x, ans;
        for (int i=0; i<n; i++){
            scanf("%d", &x);
            sum+=x;
            for (int j=sum; j>=x; j--)
                if (b[j-x]==1)
                    b[j]=1;  //装箱问题的转移方程 
        }
        for (ans=sum/2; !b[ans]; ans--);
        printf("%d\n", sum-ans*2);
    }
    return 0;
}
