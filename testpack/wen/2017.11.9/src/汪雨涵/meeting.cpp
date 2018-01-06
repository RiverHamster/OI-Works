#include<cstdio>
using namespace std;
int main(){
    freopen("meeting.in","r",stdin);
    freopen("meeting.out","w",stdout);
	int t,a[1005],b[1005],ans;
	scanf("%d",&t);
	ans=t;
	for(int i=1;i<t;i++)
		scanf("%d %d\n",&a[i],&b[i]);
	scanf("%d %d",&a[t],&b[t]);
	for(int i=1;i<=t;i++)
		for(int j=1;j<=t;j++)
           if(a[i]==b[j]) ans--;
	printf("%d",ans);
    return 0;
}
