#include<iostream>
#include<cstdio>
using namespace std;
int t,n;
int main(){
	freopen("bst.in","r",stdin);
	freopen("bst.out","w",stdout);
	scanf("%d", &t);
    while(t--){
    	scanf("%d", &n);
    	printf("%d %d\n", (n&(n-1))+1, n|(n-1));
    }
    return 0;
}
