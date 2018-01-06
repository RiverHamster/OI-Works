#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int t;
long long n;
int main(){
	freopen("bst.in","r",stdin);
	freopen("bst.out","w",stdout);
	scanf ("%d",&t);
	while (t--){
		scanf ("%lld",&n);
		cout<<min((n&(n-1))+1,n|(n-1))<<' '<<max((n&(n-1))+1,n|(n-1))<<endl;
	}
	return 0;
}
