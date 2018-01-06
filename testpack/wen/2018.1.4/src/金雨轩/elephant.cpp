#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
	freopen("elephant.in","r",stdin);
	freopen("elephant.out","w",stdout);
	int n,h,j,s=1;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&h);
		s=0;
		s+=h/10;
		h%=10;
		s+=h/5;
		h%=5;
		s+=h;
		printf("%d\n",s);
	}
	return 0;
}

