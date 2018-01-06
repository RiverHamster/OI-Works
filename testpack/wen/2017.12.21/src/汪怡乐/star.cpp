#include<cstdio>
#include<cstring>
using namespace std;
int n,q,c,s[10005],x[10005],y[10005],xx1,yy1,xx2,yy2,t,ans=0;
int main (){
    freopen("star.in","r",stdin);
    freopen("star.out","w",stdout);
	scanf("%d%d%d",&n,&q,&c);
	for (int i=1;i<=n;i++)
		scanf("%d%d%d",&x[i],&y[i],&s[i]);
	for (int i=1;i<=q;i++){
		ans=0;
		scanf("%d%d%d%d%d",&t,&xx1,&yy1,&xx2,&yy2);
		for (int j=1;j<=n;j++){
			if (xx1<=x[j]&&yy1<=y[i]&&xx2>=x[j]&&yy2>=y[j]){
				int sss=s[j]+t%c;
				//printf("%d ",sss);
				ans+=sss;
			}
		}
		printf("%d\n",ans);
	}
    return 0;
}
