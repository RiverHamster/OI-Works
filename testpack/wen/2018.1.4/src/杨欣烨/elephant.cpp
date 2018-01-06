#include <stdio.h>
int main(){
    freopen("elephant.in","r",stdin);
    freopen("elephant.out","w",stdout);
    int t,n,ans;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        ans=0;
        ans+=n/10;
        n%=10;
        ans+=n/5;
        n%=5;
        ans+=n;
        printf("%d\n",ans);
    }
    return 0;
}
