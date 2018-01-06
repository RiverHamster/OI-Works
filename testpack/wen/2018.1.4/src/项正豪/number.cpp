#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
using namespace std;
char a[100005];
int x[10005];
int main(){
	freopen("number.in","r",stdin);
	freopen("number.out","w",stdout);
	int t,k,ans;
	scanf("%d\n",&t);
	while(t--){
		ans=0;
		scanf("%d\n%s\n",&k,a);
		int len=strlen(a);
		for(int i=0;i<len;i++){
			x[i]=a[i]-'0';
			k-=x[i];
		}
		sort(x,x+len);
		for(int i=0;i<len;i++){
			if(k<=0) break;
			k-=(9-x[i]);
			ans++;
		}
		printf("%d\n",ans);
	}
	return 0;
}
