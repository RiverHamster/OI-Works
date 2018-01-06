//meeting
#include <cstdio>
#include <algorithm>
using namespace std;
struct Node{
	int x,y;
}a[1005];
bool miao(Node a,Node b){
	return a.x<b.x;
}
int main(){
	freopen("meeting.in","r",stdin);
	freopen("meeting.out","w",stdout);
	int t,ans=0;
	scanf("%d",&t);
	for (int i=1;i<=t;i++){
		scanf("%d %d",&a[i].x,&a[i].y);
	}
	sort(a+1,a+t+1,miao);
	ans=t;
	for (int i=2;i<t;i++){
		if (a[i].x<=a[i-1].y) ans--;
	}
	printf("%d",ans);
	return 0;
}