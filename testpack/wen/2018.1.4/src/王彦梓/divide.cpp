#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int t,n,a[55],cnt,ans;
int f[50005];
int main(){
    int i,j;
    freopen("divide.in","r",stdin);
    freopen("divide.out","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        ans=cnt=0;
        memset(f,0,sizeof(f));
        for(i=1;i<=n;i++){
            scanf("%d",&a[i]);
            cnt+=a[i];
        }
        ans=cnt;
        cnt/=2;
        for(i=1;i<=n;i++){
            for(j=cnt;j>=a[i];j--){
                f[j]=max(f[j],f[j-a[i]]+a[i]);
            }
        }
        ans=ans-f[cnt];
        printf("%d\n",abs(ans-f[cnt]));
    }
    return 0;
}
