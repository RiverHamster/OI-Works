#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	freopen("elephant.in","r",stdin);
	freopen("elephant.out","w",stdout);
	int n,num,b,c;
	scanf("%d",&n);
	while(n--){
		int ans=0;
		scanf("%d",&num);
		if(num>=10){b=num/10; ans+=b; num-=b*10;}
		if(num>=5) {c=num/5; ans+=c; num-=c*5;}
		ans+=num;
		printf("%d\n",ans);
	}
}