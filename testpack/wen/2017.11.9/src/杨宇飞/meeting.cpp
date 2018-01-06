#include <iostream>
#include <cstdio>
using namespace std;
int a[1000][2];
int ans;
int main(){
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d%d",&a[i][0],&a[i][1]);
	}
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(a[i][0]<=a[j][1])
			{
				ans++;
				break;
			}
	printf("%d\n",ans-1);
	return 0;
}

