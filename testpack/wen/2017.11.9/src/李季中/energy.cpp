#include<iostream>
using namespace std;
long long n;
int main(){freopen("energy.in","r",stdin);
	           freopen("energy.out","w",stdout);
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<n*n<<' '<<(n+1)*n/2*3<<endl;
	}
	return 0;
}