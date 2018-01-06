#include<iostream>
#include<cstdio>
using namespace std;
int t,x;
int main()
{
	freopen("bst.in","r",stdin);
	freopen("bst.out","w",stdout);
	scanf("%d\n",&t);
	while (t--)
	{
		scanf("%d\n",&x);
		printf("%d %d\n",x&x-1|1,x|x-1);
	}
	return 0;
}

