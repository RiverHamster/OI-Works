#include <cstdio>
#include <algorithm>
using namespace std;
int n,f[1001],top;
struct ffx{
	int s,e,x;
}a[1001];
bool cmp(ffx x,ffx y){if(x.s==y.s)return x.e<y.e;return x.s<y.s;}
int main(){freopen("meeting.in","r",stdin);
	           freopen("meeting.out","w",stdout);
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%d%d",&a[i].s,&a[i].e);
	sort(a,a+n,cmp);
	int ans=0;
	for(int i=0;i<n;i++){
		bool k=1;
		for(int j=0;j<top;j++)
			if(f[j]<=a[i].s){f[j]=a[i].e;k=0;break;}
		if(k)f[top++]=a[i].e;
		}
	printf("%d",top);
	return 0;
}