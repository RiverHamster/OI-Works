#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
bool np[10005];
int p[5005],l,t,n,s[5005],ans;
int main(){
	int i,j;
	freopen("prime.in","r",stdin);
	freopen("prime.out","w",stdout);
	for(i=2;i<=10000;i++){
		if(!np[i]){
			p[++l]=i;
			for(j=i*i;j<=10000;j+=i)
				np[j]=1;
		}
	}
	for(i=1;i<=l;i++){
		s[i]=s[i-1]+p[i];
	}
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		ans=0;
		for(i=1;i<=l;i++){
			for(j=i;j<=l;j++){
				if((s[j]-s[i-1])>n)
					break;
				if((s[j]-s[i-1])==n){
					ans++;
				}
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
