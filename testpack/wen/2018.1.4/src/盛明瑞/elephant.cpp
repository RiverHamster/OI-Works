#include<cstdio>
using namespace std;
int main(){
freopen ("elephant.in","r",stdin);
freopen ("elephant.out","w",stdout);
int t,n,s,x,y,z;
	scanf ("%d",&t);
	while (t--){
		s=0;
		scanf ("%d",&n);
        x=n/10;n%=10;
        y=n/5;n%=5;
        z=n;
		printf ("%d\n",x+y+z);
	}
return 0;
}
