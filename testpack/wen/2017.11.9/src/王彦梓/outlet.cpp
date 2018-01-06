#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int t,k,s,n,i;
int main(){
	freopen("outlet.in","r",stdin);
	freopen("outlet.out","w",stdout);
	scanf("%d",&t);
	while(t--){
		scanf("%d",&k);
		s=0;
		for(i=0;i<k;i++){
			scanf("%d",&n);
			s+=n;
		}
		printf("%d\n",s-k+1);
	}
	return 0;
}
