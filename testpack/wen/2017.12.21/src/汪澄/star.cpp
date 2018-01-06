#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int a[205][205];
int main(){
	freopen("star.in","r",stdin);
	freopen("star.out","w",stdout);
	int n,q,c,x,y,s;
	int t,lx,ly,rx,ry;
	scanf("%d %d %d",&n,&q,&c);
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&x,&y,&s);
		a[x][y]=s+1;
	}
	for(int i=0;i<q;i++){
		int ans=0;
		scanf("%d %d %d %d %d",&t,&lx,&ly,&rx,&ry);
		for(int i=lx;i<=rx;i++)
			for(int j=ly;j<=ry;j++)
				if(a[i][j])
					ans+=(a[i][j]-1+t%(c+1))%(c+1);
		printf("%d\n",ans);
	}
	return 0;
}
