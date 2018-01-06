#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int t,x;
int main(){
    freopen("bst.in","r",stdin);
    freopen("bst.out","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%d",&x);
        printf("%d %d\n",(x&(x-1))+1,(x|(x-1)));
    }
    return 0;
}
