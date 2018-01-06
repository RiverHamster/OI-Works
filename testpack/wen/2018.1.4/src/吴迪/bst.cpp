#include <cstdio>
#include <iostream>
using namespace std;
int main(){
	freopen("bst.in","r",stdin);
	freopen("bst.out","w",stdout);
	int t;
	scanf("%d",&t);
	long long x;
	while(t--){
		cin>>x;
		cout<<(long long)((x&(x-1))+1)<<" "<<(long long)(x|(x-1))<<endl;
	}
	return 0;
}
