#include <cstdio>
int main(){
    freopen("elephant.in", "r", stdin);
    freopen("elephant.out", "w", stdout);
    int t, x;
    scanf("%d", &t);
    while (t--){
        scanf("%d", &x);
        int ans=x/10, y=x%10;
        ans+=y/5 + y%5;
        printf("%d\n", ans);        
    }
    return 0;
} 
