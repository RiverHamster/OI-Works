//bst
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
    freopen("bst.in","r",stdin);
    freopen("bst.out","w",stdout);
	int t;
	int n;
	scanf("%d",&t);
	while (t--){
		scanf("%d",&n);
		printf("%d %d\n",(n&(n-1))+1,n|(n-1));
	}
    return 0;
}