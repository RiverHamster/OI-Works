#include <cstdio>
#include <algorithm>
using namespace std;
const int N=10005;
struct Mud{ 
    int s, e; 
}mud[N]; //分别表示起点和终点 
bool cmp(Mud p, Mud q){
	return p.s < q.s;
}//按起点升序排序
int main(){
    freopen("muds.in","r",stdin);
    freopen("muds.out","w",stdout);
    int n, l;
    scanf("%d %d", &n, &l);
    for (int i=0; i<n; i++)
        scanf("%d %d", &mud[i].s, &mud[i].e);
    sort(mud, mud+n, cmp);
    int left=-1, ans=0, t;
    for (int i=0; i<n; i++){
        if (left<mud[i].s) 
            left=mud[i].s;
        ans+=t=(mud[i].e-left+l-1)/l;
        left+=t*l;
    }
    printf("%d\n", ans);
    return 0;
}
