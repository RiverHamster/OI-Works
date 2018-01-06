#include<cstdio>
using namespace std;
int  a[5005];
bool pz(int x){
	for (int i=2;i*i<=x;i++){
		if (x%i==0) return 0;
		}
		return 1;
	}
int main(){
freopen ("prime.in","r",stdin);
freopen ("prime.out","w",stdout);
int s,n,sign=1;
	a[0]=2;
	for (int i=3;i<10000;i+=2){
		if (pz(i)) a[sign++]=i;
		}
	scanf ("%d",&s);
	while (s--){
		scanf ("%d",&n);
		int ans=0;
		for (int i=0;;i++){
			int sum=0;
			if (a[i]>n) break;
			for (int j=i;;j++){
				sum+=a[j];
				if (sum==n) ans++;
				if (sum>n) break;
				}
	}
	printf ("%d\n",ans);
}
return 0;
}