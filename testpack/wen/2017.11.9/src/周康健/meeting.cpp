#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
bool  b[1010];
struct P{
	int a,b;
}t[1010];
bool cmp(P x,P y){
	if (x.a!=y.a)
	   return x.a<y.a;
    return x.b<y.b;
}
int main(){
	freopen ("meeting.in","r",stdin);
	freopen ("meeting.out","w",stdout);
	int n;
	scanf ("%d",&n);
	for (int i=1;i<=n;i++)
		scanf ("%d %d",&t[i].a,&t[i].b);
	sort(t,t+n+1,cmp);
	int ans=n;
	for (int i=1;i<=n;i++){
		for (int j=i+1;j<=n;j++){
			if (t[i].b<=t[j].a&&b[i]==0&&b[j]==0){
				b[j]=1;
				t[i].b=t[j].b;
				ans--;
			}
		}
	}
	printf ("%d\n",ans);
	return 0;
}
