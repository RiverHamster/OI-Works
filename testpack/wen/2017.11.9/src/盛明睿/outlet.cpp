#include<cstdio>
using namespace std;
int main(){
freopen ("outlet.in","r",stdin);
freopen ("outlet.out","w",stdout);
int n,s;
	scanf ("%d",&n);
	while (n--){
		int l=0,a;
		scanf ("%d",&s);
		for (int i=0;i<s;i++){
			scanf ("%d",&a);
			l+=a;
		}
		printf ("%d\n",l-s+1);
	}
return 0;
}