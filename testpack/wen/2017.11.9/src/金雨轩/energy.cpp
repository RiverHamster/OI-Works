#include <stdio.h>
using namespace std;
int main ()
{
	freopen("energy.in","r",stdin);
	freopen("energy.out","w",stdout);
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	long long s,s1=0;
	for(int i=0;i<n;i++)
	{
		s=a[i]*a[i];
		printf("%u ",s);
		for(int j=1;j<=a[i];j++) s1+=j*3;
		printf("%u\n",s1);
		s1=0;
	}
	return 0;
}
