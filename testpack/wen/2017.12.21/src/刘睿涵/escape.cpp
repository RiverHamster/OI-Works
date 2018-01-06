#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;
char b[1000086];
int n,m,ans,ask,ok,t,len;
int a[100086];
int main(){
    freopen("escape.in","r",stdin);
    freopen("escape.out","w",stdout);
    scanf("%d\n",&t);
    while(t--){
      cin>>b;
      len=strlen(b);
      int left=1,rt=len,ask=1;
      for(int i=0;i<len;i++){
        if(b[i]=='r')
        { a[left]=ask;
          left++;
          ask++;
          }
        if(b[i]=='l'){
         a[rt]=ask;
         rt--;
         ask++;
         }
         }
      for(int j=1;j<=len;j++){
        printf("%d ",a[j]);
        }
      printf("\n");
      }
      //system("pause");
      return 0;
}
