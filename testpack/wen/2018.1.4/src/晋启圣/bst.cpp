#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
    freopen("bst.in","r",stdin);
    freopen("bst.out","w",stdout);
    int t,x;
	cin>>t;
	while(t--){
		cin>>x;
		cout<<((x&(x-1))+1)<<' '<<(x|(x-1))<<endl;
	}
    return 0;
}
