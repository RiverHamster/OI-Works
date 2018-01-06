#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std;
typedef long long int ll;
#define NextInt(a) scanf("%d",&a)
#define NextChar(a) scanf("%c",&a)
#define NextString(a) cin>>a
#define PrintInt(a) printf("%d",a)
#define PrintspInt(a) printf("%d ",a)
#define PrintlnInt(a) printf("%d\n",a)
int main(){
    freopen("sum.in","r",stdin);
    freopen("sum.out","w",stdout);
    int t,n,i;
    ll sum,mini,a;
    NextInt(t);
    while(t--){
        sum=0;
        mini=2147483647;
        NextInt(n);
        for(i=1;i<=n;i++){
            NextInt(a);
            sum+=a;
            mini=min(mini,a);
        }
        sum+=mini;
        PrintlnInt(sum);
    }
    return 0;
}
