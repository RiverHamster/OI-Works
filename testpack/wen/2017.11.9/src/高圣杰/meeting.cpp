#include<cstdio>
#include<algorithm>
using namespace std;
int t[1005];
struct node{
	int f,l;
}a[1005];
bool cmp(node a,node b){
	if(a.f==b.f) return a.l<b.l;
	return a.f<b.f;
}
int main(){
	freopen("meeting.in","r",stdin);
	freopen("meeting.out","w",stdout);
	int n,m=1,ok;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d %d",&a[i].f,&a[i].l);
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<=n;i++){
		ok=0;
		for(int j=1;j<=m&&ok==0;j++){
			if(a[i].f>=t[j]){
				t[j]=a[i].l;ok=1;
			}
		}
		if(ok==0) t[++m]=a[i].l;
	}
	printf("%d\n",m);
	return 0;
}
