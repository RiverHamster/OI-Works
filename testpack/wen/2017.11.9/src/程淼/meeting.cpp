#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int n,ans,b[1005];
struct Node{
	int b,f;
}a[1005];
bool cmp(Node p,Node q){
	if (p.b==q.b) return p.f<q.f;
	else return p.b<q.b;
}
int main(){
	freopen("meeting.in","r",stdin);
	freopen("meeting.out","w",stdout);
	scanf ("%d",&n);
	for (int i=1;i<=n;i++)
		scanf ("%d%d",&a[i].b,&a[i].f);
	sort(a+1,a+n+1,cmp);
	ans=1;
	b[ans]=a[1].f;
	for (int i=2;i<=n;i++){
		int j;
		for (j=1;j<=ans;j++)
			if (b[j]<=a[i].b){b[j]=a[i].f;break;}
		if (j>ans) b[++ans]=a[i].f;
		sort (b+1,b+ans+1);
	}
	printf ("%d\n",ans);
	return 0;
}
