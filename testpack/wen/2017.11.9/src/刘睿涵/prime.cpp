#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;
int t,a[10086],ans,ask,n,m,s[30086];
inline void dab(){
       for(int i=2;i<=10000;i++){
         if(!s[i]){
           a[++ask]=i;
           }
           for(int j=i*i;j<=10000;j+=i){
             s[j]=1;
}
}
}
inline void work(){
       scanf("%d",&t);
       while(t--){
         scanf("%d",&n);
         int s=0;
         for(int i=1;a[i]<=n;i++){
            int ans=0;
            for(int j=i;ans<n;j++)
              ans+=a[j];
            if(ans==n)
            s++;
            }
         printf("%d\n",s);
         }
         }
int main(){
    freopen("prime.in","r",stdin);
    freopen("prime.out","w",stdout); 
    dab();
    work();
    //while(1);
    return 0;
}
    
            
         
          
