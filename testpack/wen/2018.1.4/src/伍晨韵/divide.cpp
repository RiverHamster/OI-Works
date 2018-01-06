#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int t,n,a[55],f[500005];
int main(){
	freopen("divide.in","r",stdin);
	freopen("divide.out","w",stdout);
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		memset(f,0,sizeof(f));
		int ans=0,cnt=0;
		for(int i=1; i<=n; i++){
		    scanf("%d", &a[i]);
		    cnt+=a[i];
		}
	    ans=cnt; cnt/=2;
		for(int i=1; i<=n; i++)
		    for(int j=cnt; j>=a[i]; j--)
		        f[j]=max(f[j],f[j-a[i]]+a[i]);
		ans=ans-f[cnt];
		printf("%d\n", abs(ans-f[cnt]));
	}
	return 0;
}
