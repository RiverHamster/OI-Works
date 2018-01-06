#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
	freopen("elephant.in","r",stdin);
	freopen("elephant.out","w",stdout);
	int t,x,ans;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&x);
		ans=0;
		ans+=x/10;
		x=x%10;
		ans+=x/5;
		x=x%5;
		ans+=x;
		printf("%d\n",ans);
		}
	return 0;
	}
