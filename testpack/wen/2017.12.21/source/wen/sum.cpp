#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
int main(){
	freopen("sum.in", "r", stdin);
	freopen("sum.out", "w", stdout);
	int t, n;
	scanf("%d", &t);
	while (t--){
		scanf("%d", &n);
		int x, m=1<<30;
		ll sum=0;
		while (n--){
			scanf("%d", &x);
			sum+=x;
			m=min(x, m);
		}
		cout<<sum+m<<endl;
	}
	return 0;
}
