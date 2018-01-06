#include <stdio.h>
#include <iostream>
using namespace std;
typedef long long ll;
int main(){
	freopen("energy.in","r",stdin);
	freopen("energy.out","w",stdout);
	int t;
	ll n;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<n*n<<' '<<(1+n)*n/2*3<<'\n';
	}
	return 0;
}