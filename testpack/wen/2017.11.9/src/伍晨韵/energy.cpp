#include <iostream>
#include <cstdio>
using namespace std;
int main ()
{
	freopen ("energy.in","r",stdin);
	freopen ("energy.out","w",stdout);
	int t;
	scanf ("%d",&t);
	while (t--){
		int n;
		scanf ("%d",&n);
		unsigned long long x,y=0;
		x=n*n;
		for (int i=1;i<=n;i++)
			y+=i*3;
		cout<<x<<' '<<y<<endl;
	}
	return 0;
}