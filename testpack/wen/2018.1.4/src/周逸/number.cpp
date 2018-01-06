#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
char a[100001];
int main(){
	freopen("number.in","r",stdin);
	freopen("number.out","w",stdout);
	int t,k,n;
	scanf("%d",&t);
	while(t--){
		int ans=0,s=0;
		scanf("%d",&k);
		scanf("%s",a);
		n=strlen(a);
		sort(a,a+n);
		for(int i=0;i<n;i++)s+=a[i]-'0';
	    for(int i=0;i<n&&s<k;i++)
			s+=9-(a[i]-'0'),ans++;
		printf("%d\n",ans);
	}
	return 0;
}
