#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#define N 1005
using namespace std;
struct P {
	int a,b;
}f[N];
bool cmp (P x,P y){
	if (x.a==y.a)
		return x.b<y.b;
	return x.a<y.a;
}
int n,ans,k[10005],ok,p;
int main (){
	freopen ("meeting.in","r",stdin);
	freopen ("meeting.out","w",stdout);
	scanf ("%d",&n);
	for (int i=1;i<=n;i++)
		scanf ("%d%d",&f[i].a,&f[i].b);
	sort(f+1,f+1+n,cmp);
	k[1]=f[1].b;
	ans=1;
	for (int i=2;i<=n;i++){
		p=0;
		for (int j=1;j<=ans;j++){
			if (f[i].a>=k[j] /*&& (!ok || k[j]<k[p])*/){
				p=j;
			}
		}
		if (p){
			k[p]=f[i].b;
		}
		else
			k[++ans]=f[i].b;
	}
	printf ("%d",ans);
}