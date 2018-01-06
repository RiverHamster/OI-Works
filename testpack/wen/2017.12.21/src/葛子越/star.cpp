#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std;
#define NextInt(a) scanf("%d",&a)
#define NextChar(a) scanf("%c",&a)
#define NextString(a) cin>>a
#define PrintInt(a) printf("%d",a)
#define PrintspInt(a) printf("%d ",a)
#define PrintlnInt(a) printf("%d\n",a)
int sum[205][205][15];
int num[205][205][15];
struct Node{
    int x,y,s;
}a[10005];
int main(){
    freopen("star.in","r",stdin);
    freopen("star.out","w",stdout);
    int n,m,k,i,j,l;
    int x1,x2,y1,y2,t,ans;
    NextInt(n);
    NextInt(m);
    NextInt(k);
    for(i=1;i<=n;i++){
        NextInt(a[i].x);
        NextInt(a[i].y);
        NextInt(a[i].s);
    }
    for(i=1;i<=n;i++){
        for(j=0;j<=k;j++){
            num[a[i].x][a[i].y][j]+=(a[i].s+j)%(k+1);
        }
    }
    for(i=1;i<=200;i++){
        for(j=1;j<=200;j++){
            for(l=0;l<=k;l++){
                sum[i][j][l]=sum[i][j-1][l]+num[i][j][l];
            }
        }
    }
    for(i=1;i<=m;i++){
        ans=0;
        NextInt(t);
        NextInt(x1);
        NextInt(y1);
        NextInt(x2);
        NextInt(y2);
        t%=(k+1);
        for(j=x1;j<=x2;j++){
            ans+=(sum[j][y2][t]-sum[j][y1-1][t]);
        }
        PrintlnInt(ans);
    }
    return 0;
}
