#include <cstdio>
#include <algorithm>
using std::sort;
struct P{
	int a;
	int p;
	friend bool operator <(P p,P q){
		if(p.a==q.a){
			return p.p<q.p;
		}
		return p.a<q.a;
	}
}a[2005];
int main(){
	freopen("meeting.in","r",stdin);
	freopen("meeting.out","w",stdout);
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%d",&a[(i<<1)-1].a,&a[(i<<1)].a);
		a[(i<<1)-1].p=1;
		a[(i<<1)].p=0;
	}
	sort(a+1,a+1+(n<<1));
	int ans=0,now=0;
	for(int i=1;i<=(n<<1);i++){
		if(a[i].p==0){
			now--;
		}
		else{
			now++;
			if(now>ans){
				ans=now;
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}
