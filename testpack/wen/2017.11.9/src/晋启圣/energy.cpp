#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
int main(){
    freopen("energy.in","r",stdin);
    freopen("energy.out","w",stdout);
    int t,n;
	long long ans1,ans2;
	cin>>t;
	while(t--){
		cin>>n;
		ans1=0;
		ans2=0;
		for(int i=1;i<=n;i++){
			ans1+=i*2-1;
			ans2+=i*3;
		}
		cout<<ans1<<' '<<ans2<<endl;
	}
    return 0;
}
