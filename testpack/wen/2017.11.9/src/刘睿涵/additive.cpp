#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;
int t,n,m,a[10086],ans,ask,b[10086];
inline void dfs(int x,int i,int sum){
       if(sum>=a[x]){
        if(sum==a[x])
        ans++;
        return;
        }
  for(int j=i+1;j<=n;j++)
     if(!b[j])
    { b[j]=1;
      dfs(x,j,sum+a[j]);
      b[j]=0;
      }
}
int main(){
    freopen("additive.in","r",stdin);
    freopen("additive.out","w",stdout);
    scanf("%d",&t);
    while(t--){
      scanf("%d",&n);
      ans=0,ask=0;
      for(int i=1;i<=n;i++){
         scanf("%d",&a[i]);
         ask+=a[i];
         }
      for(int i=1;i<=n;i++){
        if(a[i]<=ask-a[i])
        { b[i]=1;
          dfs(i,0,0);
          b[i]=0;
          }
      }
      printf("%d\n",ans);
      }
    return 0;
}
          
