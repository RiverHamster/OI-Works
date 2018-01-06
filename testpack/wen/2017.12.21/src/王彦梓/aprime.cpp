#include<cstdio>
#include<algorithm>
using namespace std;
int t,n,m,d,a[1005],b[1005],s[1005];
bool ok;
bool isp(int n){
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
            return false;
    return true;     
}
int main(){
    freopen("aprime.in","r",stdin);
    freopen("aprime.out","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&n,&m,&d);
        if(m-n+1<d)
            continue;
        for(int i=1;i<=m-n+1;i++){
            a[i]=i+n-1;
        }
        ok=1;
        while(ok){
            next_permutation(a+1,a+2+m-n);
            bool f=0;
            s[0]=0;
            for(int i=1;i<=m-n+1;i++){
                if(a[i]!=i+n-1)
                    f=1;
                s[i]=s[i-1]+a[i];
            }
            if(!f){
                printf("None\n");
                ok=0;
                break;
            }
            f=1;
            for(int j=2;j<=d&&f;j++)
                for(int i=j;i<=m-n+1&&f;i++)
                    if(isp(s[i]-s[i-j])){
                        f=0;break;
                    }
            if(f==1){
                for(int i=1;i<=m-n+1;i++)
                    printf("%d ",a[i]);
                puts("");
                break;
            }
        }
    }
    return 0;
}
