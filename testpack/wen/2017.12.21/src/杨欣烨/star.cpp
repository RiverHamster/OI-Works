#include <stdio.h>
#include <ctype.h>
struct Star{
	int x,y,s;
}a[100005];
inline int rd(){
	register int r=0,neg=1;
	register char ch;
	while(isspace(ch=getchar()));
	if(ch=='-') neg=-1,getchar();
	do r=r*10+ch-'0'; while(isdigit(ch=getchar()));
	return r*neg;
}
inline bool inside(int x1,int y1,int x2,int y2,int i){
	if(a[i].x>=x1&&a[i].x<=x2&&a[i].y>=y1&&a[i].y<=y2) return true;
	return false;
}
int main(){
	freopen("star.in","r",stdin);
	freopen("star.out","w",stdout);
	register int n,q,c;
	n=rd(),q=rd(),c=rd();
	for(int i=1;i<=n;i++){
		a[i].x=rd();a[i].y=rd();a[i].s=rd();
	}
	register int x1,y1,x2,y2,t,ans;
	for(int i=1;i<=q;i++){
		t=rd();x1=rd();y1=rd();x2=rd();y2=rd();
		ans=0;
		for(int i=1;i<=n;i++) if(inside(x1,y1,x2,y2,i)) ans+=(a[i].s+t)%(c+1);
		printf("%d\n",ans);
	}
	return 0;
}
