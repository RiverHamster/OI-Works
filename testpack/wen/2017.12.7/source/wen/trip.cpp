#include <cstdio>
int main(){
    freopen("trip.in", "r", stdin);
    freopen("trip.out", "w", stdout);
    int n, ans=0, tm=0;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        int s, t;
        scanf("%d %d", &s, &t);
        ans+=s*(t-tm);
        tm=t;
    }
    printf("%d\n", ans);
    return 0;
}
