#include <cstdio>
inline int mx(int a, int b){
    return a > b ? a : b;   
}
int main(){
    freopen("blocks.in", "r", stdin);
    freopen("blocks.out", "w", stdout);
    int t, n;
    scanf("%d", &t);
    while (t--){
        scanf("%d", &n);
        int ans=0, tot=0, sum=0;
        int a, b, c[105];
        for (int i=0; i<n; i++){
            scanf("%d %d", &a, &b);
            if (a==2) //宽度为2，直接计入ans 
                ans += b;
            else 
                sum += c[tot++] = b; //否则，计算c数组，并累加求和 
        }  
        int dp[10005]={0};
        for (int i=0; i<tot; i++){ //对c数组进行01背包 
            for (int j=sum/2; j>=c[i]; j--)
                dp[j] = mx(dp[j], dp[j-c[i]]+c[i]);
        }
        ans += sum-dp[sum/2];
        printf("%d\n", ans);
    }
    return 0;
} 
