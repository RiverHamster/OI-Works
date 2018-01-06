#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen ("outlet.in","r",stdin);
	freopen ("outlet.out","w",stdout);
	int t;
	scanf ("%d",&t);
	for (int i=1;i<=t;i++){
		int n;
		int ans=0;
		scanf ("%d",&n);
		int a;
		for (int i=1;i<n;i++){
			scanf ("%d",&a);
			ans+=a-1;
		}
		scanf ("%d",&a);
		ans+=a;
		printf ("%d\n",ans);
	}
	return 0;
}
