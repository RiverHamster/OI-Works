#include<cstdio>
#include<iostream>
using namespace std;
int t,n,minn,x;
unsigned long long s;
int main(){
	freopen ("sum.in","r",stdin);
	freopen ("sum.out","w",stdout);
	scanf ("%d",&t);
	while (t--){
		scanf ("%d",&n);
		s=0;
		minn=1<<30;
		for (int i=0;i<n;++i){
			scanf ("%d",&x);
			s+=x;
			if (x<minn) minn=x;
		}
		cout<<minn+s<<endl;
	}
	return 0;
}