#include <iostream>
#include <cstdio>
using namespace std;
bool pzs (int n){
	if (n==0 || n==1) return 0;
	bool ok=1;
	for (int i=2;i*i<=n;i++)
		if (n%i==0){ok=0;break;}
	return ok;
}
int a[10000],r;
void input ()
{
	for (int i=1;i<10005;i++)
		if (pzs (i)) a[r++]=i;
	return;
}
int main ()
{
	freopen ("prime.in","r",stdin);
	freopen ("prime.out","w",stdout);
	input ();
	int t;
	cin>>t;
	while (t--){
		int n;
		cin>>n;
		int ans=0;
		for (int i=0;i<r;i++)
		{
			int sum=0;
			for (int j=i;j<r;j++){
				sum+=a[j];
				//cout<<sum<<endl;
				if (sum==n) {ans++;break;}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}