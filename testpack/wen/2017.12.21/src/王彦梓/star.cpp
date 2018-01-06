#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int n,q,c,t,x1,x2,y,y2,ans ;
struct P{
    int x,y,s;
}a[10005];
bool cmp(P p,P q){
    if(p.x!=q.x)
        return p.x<q.x;
    return p.y<q.y;
}
int main(){
    int i,j;
    freopen("star.in","r",stdin);
    freopen("star.out","w",stdout);
    scanf("%d%d%d",&n,&q,&c);
    for(i=1;i<=n;i++){
        scanf("%d%d%d",&a[i].x,&a[i].y,&a[i].s);
    }
    sort(a+1,a+1+n,cmp);
    for(i=1;i<=q;i++){
        scanf("%d%d",&t,&x1,&y,&x2,&y2);
        ans=0;
        for(j=1;j<=n;j++){
            if(a[i].x>=x1&&a[i].x<=x2&&a[i].y>=y&&a[i].y<=y2){
                ans+=t-(int)(t/c)*c+a[i].s;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
