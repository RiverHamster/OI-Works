#include <iostream>
#include <cstdio>
using namespace std;
int main ()
{
	freopen ("outlet.in","r",stdin);
	freopen ("outlet.out","w",stdout);
	int t;
	scanf ("%d",&t);
	while (t--){
		int n;
		scanf ("%d",&n);
		int a[15];
		int sum=0;
		for (int i=0;i<n;i++){
			scanf ("%d",&a[i]);
			sum+=a[i];
		}
		printf ("%d\n",sum-n+1);
	}
	return 0;
}