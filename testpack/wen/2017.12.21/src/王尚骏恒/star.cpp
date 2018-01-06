#include <cstdio>
#include <iostream>
using namespace std;
int n,q,c,x[10005],y[10005],s[10005],k[10005],a,b,c1,d,z,i,ans;
int main()
{
    freopen("star.in","r",stdin);
    freopen("star.out","w",stdout);
    scanf("%d %d %d",&n,&q,&c);
	for(i=1;i<=n;i++)
		scanf("%d %d %d",&x[i],&y[i],&s[i]);
	while(q--){
		scanf("%d %d %d %d %d",&z,&a,&b,&c1,&d);
		for(i=1;i<=n;i++) k[i]=s[i];
		for(i=1;i<=n;i++) k[i]=(k[i]+(z%c))%c;
		ans=0;
		for(i=1;i<=n;i++) if(x[i]>=a&&y[i]>=b&&x[i]<=c1&&y[i]<=d) ans+=k[i];
		printf("%d\n",ans);
	}
    return 0;
}
