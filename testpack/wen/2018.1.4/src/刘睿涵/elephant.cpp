#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int t,n,ans;
int main(){
    freopen("elephant.in","r",stdin);
    freopen("elephant.out","w",stdout);
    scanf("%d",&t);
    while(t--){
      scanf("%d",&n);
      if(n!=0)
      ans+=n/10;
      n%=10;
      if(n!=0)
      ans+=n/5;
      n%=5;
      if(n!=0)
      ans+=n/1;
      n%=1;
      printf("%d\n",ans);
      ans=0;
      }
     //system("pause");
     return 0;
}
      
