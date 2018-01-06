#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
int main(){
    freopen("outlet.in","r",stdin);
    freopen("outlet.out","w",stdout);
    int t,k,ans,a[15];
	cin>>t;
	while(t--){
		cin>>k;
		ans=0;
		for(int i=1;i<=k;i++){
			cin>>a[i];
		    ans+=a[i];
		}
		ans-=k-1;
		cout<<ans<<endl;
	}
    return 0;
}
