#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
int n,t;
int main()
{
	freopen ("bst.in","r",stdin);
	freopen ("bst.out","w",stdout);
	scanf("%d",&t);
	int ans;
	for(int i=1;i<=t;i++){
		scanf("%d",&n);
		printf("%d %d\n",(n&(n-1))+1,n|(n-1));
	}
	return 0;
}

