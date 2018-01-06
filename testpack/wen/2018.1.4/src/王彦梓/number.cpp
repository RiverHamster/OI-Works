#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int k,t,l,cnt,ans;
char a[100005];
int main(){
    freopen("number.in","r",stdin);
    freopen("number.out","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("\n%d%s",&k,a);
        l=strlen(a);ans=cnt=0;
        for(int i=0;i<l;i++)
            cnt+=a[i]-'0';
        if(cnt>=k)
            printf("0\n");
        else{
            sort(a,a+l);
            for(int i=0;i<l;i++)
                if(a[i]<='9'){
                    cnt+=9-(a[i]-'0');ans++;
                    if(cnt>=k){
                        printf("%d\n",ans);
                        break;
                    }
                }
        }
    }
    return 0;
}
