#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int t,x,ans;
int main(){
    freopen("elephant.in","r",stdin);
    freopen("elephant.out","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%d",&x);
        ans=0;
        ans+=x/10;
        x=x%10;
        ans+=x/5;
        x=x%5;
        ans+=x;     
        printf("%d\n",ans);      
    }
    return 0;
}
