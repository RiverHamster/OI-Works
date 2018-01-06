#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
int l1[10005],l2[10005]={0};
int main(){
	freopen("additive.in","r",stdin);
	freopen("additive.out","w",stdout);
	int n,y;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%d",&l1[i],&y);
		l2[y]++;
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		if(l2[l1[i]]==0) ans++;
			else continue;
	}
	printf("%d",ans);
	return 0;
}
