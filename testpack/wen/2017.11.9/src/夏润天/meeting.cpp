#include<cstdio>
#include<algorithm>
using namespace std;
int t[1005];
struct node{
	int l,r;
}a[1005];
bool cmp(node a,node b){
	if(a.l==b.l)
		return a.r<b.r;
	return a.l<b.l;
}
int main(){
	freopen("meeting.in","r",stdin);
	freopen("meeting.out","w",stdout);
	int n,ans=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d%d",&a[i].l,&a[i].r);
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++){
		bool ok=0;
		for(int j=0;j<ans;j++)
			if(a[i].l>=t[j]){
				t[j]=a[i].r; 
				ok=1;
				break;
			}
		if(!ok){
			t[ans]=a[i].r;
			ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}
