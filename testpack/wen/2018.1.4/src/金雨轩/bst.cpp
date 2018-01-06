#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
	freopen("bst.in","r",stdin);
	freopen("bst.out","w",stdout);
	int n,h;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&h);
		printf("%d %d\n",(h&(h-1))+1,h|(h-1));
	}
	return 0;
}

