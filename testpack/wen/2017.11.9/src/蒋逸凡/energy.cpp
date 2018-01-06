#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
typedef long long ll;
int main(){
    freopen("energy.in","r",stdin);
	freopen("energy.out","w",stdout);
	ll t,n;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<n*n<<' '<<n*(n+1)/2*3<<endl;
	}
	return 0;
}
