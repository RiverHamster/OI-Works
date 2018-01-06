#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>  
#include <algorithm>
using namespace std;
int ans,ask,a[10086],n,m,t;
inline int cmp(int x,int y){
    return x > y;
}
int main(){
    freopen("outlet.in","r",stdin);
    freopen("outlet.out","w",stdout);
    scanf("%d",&t);
    while(t--){
      scanf("%d",&n);
      for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        ans+=a[i];
        }
      ans-=n;
      ans++;
      printf("%d\n",ans);
      ans=0;
      }
    return 0;
}

  
