#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	freopen("elephant.in","r",stdin);
	freopen("elephant.out","w",stdout);
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int a,b=0;
		scanf("%d",&a);
		b+=a/10;a=a%10;b+=a/5;a%=5;b+=a;
		printf("%d\n",b);
	}
	return 0;
}

