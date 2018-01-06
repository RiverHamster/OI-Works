#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;
long long a[10086],b[10086],c[10086],ans,ask,n,t;
long long mn(long long x,long long y){
    if(x < y)
    return x;
    else
    return y;
}
int main(){
    freopen("sum.in","r",stdin);
    freopen("sum.out","w",stdout);
    cin>>t;
    while(t--){
     ans=2147483647;
      cin>>n;
      memset(a,0,sizeof(a));
      for(int i=1;i<=n;i++){
         cin>>a[i];
         b[i]=b[i-1]+a[i];
         }
      for(int i=n;i>=1;i--){
         c[i]=c[i+1]+a[i];
         }
      for(int i=1;i<=n;i++){
         ans=mn(b[i]+c[i],ans);
         }
     cout<<ans<<endl;
     }
    //system("pause");
    return 0;
}
         
