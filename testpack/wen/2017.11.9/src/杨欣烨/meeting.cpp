#include <stdio.h>
#include <algorithm>
using namespace std;
#define max(a,b) (a>b?a:b)
const bool st=true,ed=false;
struct TimePoint{
	int p;
	bool type;
}a[100005];
int ac;
bool TpCmp(TimePoint a,TimePoint b){
	if(a.p==b.p) return a.type<b.type;
	return a.p<b.p;
}
int main(){
	freopen("meeting.in","r",stdin);
	freopen("meeting.out","w",stdout);
	int n,l,r;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%d",&l,&r);
		a[++ac].p=l,a[ac].type=st;
		a[++ac].p=r,a[ac].type=ed;
	}
	sort(a+1,a+1+ac,TpCmp);
	int now=0,ans=0;
	for(int i=1;i<=ac;i++){
		if(a[i].type==st) now++;
		else now--;
		ans=max(ans,now);
	}
	printf("%d\n",ans);
	return 0;
}