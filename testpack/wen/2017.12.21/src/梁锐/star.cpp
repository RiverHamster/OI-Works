#include <ctime>
#include <cmath>
#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>
#define in freopen ("star.in","r",stdin)
#define out freopen ("star.out","w",stdout)
#define INF 2147483647
#define UNINF -2147483648ll
#define ch char
#define bo bool
#define ui unsigned int
#define ll long long
using namespace std;
int n,m,k;
struct Star{
    int x,y,s;
}star[1005];
inline bo cmp(Star a,Star b){if (a.x==b.x)return a.y<b.y;else a.x<b.x;}
inline void work();
int main(){
    in;out;
    work();
}
inline void work(){
    scanf ("%d %d %d",&n,&k,&m);
    for (int i=1;i<=n;i++){
        scanf ("%d %d %d",&star[i].x,&star[i].y,&star[i].s);
    }
    for (int i=1,t,x1,y1,x2,y2;i<=k;i++){
        scanf ("%d %d %d %d %d",&t,&x1,&y1,&x2,&y2);
        int tmp=0;
        for (int j=1;j<=n;j++){
            if (star[j].x>=x1&&star[j].y>=y1&&star[j].x<=x2&&star[j].y<=y2){
                tmp+=(star[j].s+t)%m;
            }
        }
        printf ("%d\n",tmp);
    }
}
