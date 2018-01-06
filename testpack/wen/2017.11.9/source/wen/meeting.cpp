#include <cstdio>
#include <algorithm>
using namespace std;
struct Meet{ 
    int atime;//时间点 
    int bemark;//起止标记,0表示结束点，1表示开始点 
} a[2005];
bool cmp(Meet p, Meet q){
    if (p.atime == q.atime) 
       return p.bemark < q.bemark;
    return p.atime < q.atime;
}//排序时，按时间点先后进行，时间点相同的，结束点优先 

int main(){
    freopen("meeting.in","r",stdin);
    freopen("meeting.out","w",stdout);
    int t, tb, te;
    scanf("%d", &t);
    for (int i=0; i<t; i++){
        scanf("%d %d", &tb, &te);
        a[i*2].atime=tb;
        a[i*2].bemark=1;
        a[i*2+1].atime=te;
        a[i*2+1].bemark=0;
    }//把所有会议的开始和结束时间点合起来排序 
    sort(a, a+t*2, cmp);
    int ans=0, cur=0;
    for (int i=0; i<2*t; i++){
        if (a[i].bemark==1) cur++;//所有开始点入栈 
        else cur--;//结束点出栈 
        if (cur>ans) ans=cur;//记栈的最大深度 
    }
    printf("%d\n", ans);
    return 0;
}
