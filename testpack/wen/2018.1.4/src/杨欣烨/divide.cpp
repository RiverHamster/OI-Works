#include <stdio.h>
#include <string.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
bool f[500005];
int a[55];
int main(){
	freopen("divide.in","r",stdin);
	freopen("divide.out","w",stdout);
	int DataC,n,s;
	register int i,j,ans;
	scanf("%d",&DataC);
	while(DataC--){
		scanf("%d",&n);
		s=0;
		for(i=1;i<=n;i++) scanf("%d",&a[i]),s+=a[i];
		memset(f,false,sizeof(f));
		f[0]=true;
		for(j=1;j<=n;j++)
			for(i=s;i>=0;i--)
				if(f[i]) f[i+a[j]]=true;
		ans=0x7fffffff;
		for(i=0;i<=s;i++){
			if(f[i]){
				ans=min(ans,max(i,s-i)-min(i,s-i));
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
