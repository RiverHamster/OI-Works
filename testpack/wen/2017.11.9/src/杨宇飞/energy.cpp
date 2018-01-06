#include <iostream>
#include <cstdio>
using namespace std;
long long ans,ams,y;
int main(){
	freopen("energy.in","r",stdin);
	freopen("energy.out","w",stdout);
	int n;
	scanf("%d",&n);
	int a[n],b;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&b);
		for(int j=1;j<=b;j++)
		{
			ans+=j;
		}
		for(int j=1;j<b;j++)
			y+=j;
		ams=ans*3;
		cout<<ans+y<<' '<<ams<<endl;
		//printf("%d %d\n",ans,ans*3);
		ams=0;
		ans=0;
		y=0;
	}
	return 0;
}

