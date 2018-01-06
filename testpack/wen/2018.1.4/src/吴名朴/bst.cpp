#include<algorithm>
#include<cmath>
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	freopen("bst.in","r",stdin);
	freopen("bst.out","w",stdout);
	int t;
	cin>>t;
	long long ans1,ans2;
	while(t--)
	{
		int n;
		scanf("%d",&n);
		ans1=(n&(n-1))+1;
		ans2=n|(n-1);
		cout<<ans1<<' '<<ans2<<endl;
	}
	return 0;
}