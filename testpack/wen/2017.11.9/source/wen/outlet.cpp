#include <cstdio>
int main(){
    freopen("outlet.in","r",stdin);
    freopen("outlet.out","w",stdout);
    int t, n;
    scanf("%d", &t);
    while (t--){
          scanf("%d", &n);
          int ans=0, x;
          for (int i=0; i<n; i++){
              scanf("%d", &x);
              ans+=x;
          }
          printf("%d\n", ans-n+1);
    }
    return 0;
}
