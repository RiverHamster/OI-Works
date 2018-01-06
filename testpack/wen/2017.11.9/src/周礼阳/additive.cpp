#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
bool a[10000];
int m,x[105],ans;
inline void search(int s,int i){
	if(s==m||i>x[m])return;else ans+=a[i];
	for(int j=s+1;j<=m;j++)search(j,i+x[j]);
}
int main(){
	freopen("additive.in","r",stdin);freopen("additive.out","w",stdout);
	int t;scanf("%d",&t);
	while(t--){
		memset(a,0,sizeof(a));ans=0;scanf("%d",&m);
		for(int i=1;i<=m;i++)scanf("%d",x+i),a[x[i]]=1;
		sort(x+1,x+m+1);search(0,0);printf("%d\n",ans-m+1);
	}
}

