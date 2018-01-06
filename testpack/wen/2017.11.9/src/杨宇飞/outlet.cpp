#include <iostream>
#include <cstdio>
int main(){
	freopen("outlet.in","r",stdin);
	freopen("outlet.out","w",stdout);
	int ans=0,a;
	scanf("%d",&a);
	int b,c;
	for(int i=0;i<a;i++)
	{
		scanf("%d",&b);
		for(int j=0;j<b;j++)
		{
			scanf("%d",&c);
			ans+=c;
		}
		ans-=b-1;
		printf("%d\n",ans);
		ans=0;
	}
	return 0;
}

