#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
int main(){
	freopen("outlet.in","r",stdin);
	freopen("outlet.out","w",stdout);
    int n,t,s,t1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&t);
		s=0;
		for(int j=1;j<=t;j++){
			scanf("%d",&t1);
			s+=t1;
		}
		printf("%d\n",s-(t-1));
	}
    return 0;
}