#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;
int t,n,ans,ask;
int main(){
    freopen("bst.in","r",stdin);
    freopen("bst.out","w",stdout);
    scanf("%d",&t);
    while(t--){
     scanf("%d",&n);
     printf("%d %d\n",(n&(n-1))+1,n|(n-1));
     }
     //system("pause");
    return 0;
}
