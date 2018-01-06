#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	freopen("energy.in","r",stdin);
	freopen("energy.out","w",stdout);
	long long t,n;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<n*n<<' '<<n*(n+1)/2*3<<endl;
	}
}
