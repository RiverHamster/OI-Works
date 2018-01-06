#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int x,n,ans,i;
int main(){
	freopen("elephant.in","r",stdin);
	freopen("elephant.out","w",stdout);
	scanf("%d",&x);
	for(int i=x;i>0;i--){
		scanf("%d",&n);
		ans+=n/10;
		n%=10;
		ans+=n/5;
		n%=5;
		ans+=n;
		printf("%d\n",ans);
		ans=0;
	}
	return 0;
}
