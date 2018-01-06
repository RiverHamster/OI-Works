#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int ans,n,b[1005];
struct P{
	int b,e;
}a[1005];
bool cmp(P p,P q){
	if(p.b!=q.b)
		return p.b<q.b;
	return p.e<q.e;
}
int main(){
	int i,j;
	freopen("meeting.in","r",stdin);
	freopen("meeting.out","w",stdout);
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d%d",&a[i].b,&a[i].e);
	}
	sort(a+1,a+1+n,cmp);
	ans=1;b[ans]=a[1].e;
	for(i=2;i<=n;i++){
		for(j=1;j<=ans;j++){
			if(b[j]<=a[i].b){
				b[j]=a[i].e;
				break;
			}
		}
		if(j>ans)
			b[++ans]=a[i].e;
		sort(b+1,b+ans+1);
	}
	printf("%d",ans);
	return 0;
} 
