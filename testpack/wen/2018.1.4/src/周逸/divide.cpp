#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
int s[500001],a[5001];
int main(){
	freopen("divide.in","r",stdin);
	freopen("divide.out","w",stdout);
	int t,n;
	int ans=0,v;
	scanf("%d",&t);
	while(t--){
		memset(s,0,sizeof(s));
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]),ans+=a[i];
		}
		v=ans/2;
		for(int i=0;i<n;i++)
		{
			for(int j=v;j>=a[i];j--)
			{
				s[j]=max(s[j],s[j-a[i]]+a[i]);
			}
		}
		printf("%d\n",ans-s[v]*2);
		ans=0;
	}
	return 0;
}
