#include<stdio.h>
#include<algorithm>
using namespace std;
struct Node{
	int x,y;
}s[1005];
bool cmp(const Node &sx,const Node &sy){
	if(sx.x==sy.x) return sx.y<sy.y;
	return sx.x<sy.x;
}
int last[1005];
int main(){
	freopen("meeting.in","r",stdin);
	freopen("meeting.out","w",stdout);
	int t;scanf("%d",&t);
	for(int i=0;i<t;i++) scanf("%d%d",&s[i].x,&s[i].y);
	sort(s,s+t,cmp);int m=1;
	for(int i=0;i<t;i++){
		bool tt=1;
		for(int j=0;j<m&&tt;j++) if(last[j]<=s[i].x) last[j]=s[i].y,tt=0;
		if(tt) last[m++]=s[i].y;
	}
	printf("%d\n",m);
}

