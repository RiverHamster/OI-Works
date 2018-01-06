#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;
int a[10086],b[10086],ans[10086],ask,n,m,d,t,ok;
bool pd(int k){
   for(int c=2;c*c<=k;c++){
     if(k%c==0)
     return 1;
     }
   return 0;
}
void out(){
     //if(p[sum]==1)
     for(int i=1;i<=n-m;i++)
       printf("%d ",a[i]);
     ok=1;
}
void dfs(int t,int sum){
     if(t>=n-m+2)
     if(pd(sum))
     out();
   for(int j=n+1;j<=m;j++){
     if(!b[j]){
       b[j]=1;
       ans[t]=j;
       if(t>d)
         dfs(t+1,sum+ans[t-d]+j);
         else
         dfs(t+1,sum+j);
            b[j]=0;
            }
         }
}
     
int main(){
    freopen("aprime.in","r",stdin);
    freopen("aprime.out","w",stdout);
    scanf("%d",&t);
    while(t--){
    scanf("%d %d %d",&n,&m,&d);
    ans[1]=1;
    dfs(2,n);
    if(ok==0)
    printf("None\n");
}
  //system("pause");
  return 0;
}
    
