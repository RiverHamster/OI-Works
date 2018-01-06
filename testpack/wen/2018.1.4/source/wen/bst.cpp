#include <cstdio>
int main(){
    freopen("bst.in","r",stdin);
    freopen("bst.out","w",stdout);
    int t, n;
    scanf("%d", &t);
    while (t--){
        scanf("%d", &n);        
        printf("%d %d\n", (n&(n-1))|1,  n|(n-1));
    }
    return 0;
}
/*
直接应用位运算 
*/ 
