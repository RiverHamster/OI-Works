#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
    freopen("elephant.in","r",stdin);
    freopen("elephant.out","w",stdout);
    int t,x,ans;
	cin>>t;
	while(t--){
		ans=0;
		cin>>x;
		ans+=x/10;
		x%=10;
		ans+=x/5;
		x%=5;
		cout<<ans+x<<endl;
	}
    return 0;
}
