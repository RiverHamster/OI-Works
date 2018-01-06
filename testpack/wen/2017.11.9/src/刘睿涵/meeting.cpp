#include <cmath>
#include <ctime>
#include <cstdio>
#include <string>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int n,ans=1,t[1005];
struct Meeting{
    int start,finish;
}meeting[1005];
inline void work();
inline bool cmp(Meeting x,Meeting y);

int main(){
    freopen ("meeting.in","r",stdin);
    freopen ("meeting.out","w",stdout);
    work();
}

inline bool cmp(Meeting x,Meeting y){
    if (x.start!=y.start)return x.start<y.start;
    else return x.finish<y.finish;
}

inline void work(){
    scanf ("%d",&n);
    for (int i=1;i<=n;i++){
        scanf ("%d %d",&meeting[i].start,&meeting[i].finish);
    }
    sort(meeting+1,meeting+1+n,cmp);
    for (int i=1;i<=n;i++){
        bool ok=0;
        for (int j=1;j<=ans;j++){
            if (t[j]<=meeting[i].start){
                ok=1;
                t[j]=meeting[i].finish;
                break;
            }
        }
        if (!ok){
            ans++;
            t[ans]=meeting[i].finish;
        }
    }
    printf ("%d\n",ans);
}
