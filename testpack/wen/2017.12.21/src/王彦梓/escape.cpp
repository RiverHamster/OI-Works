#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int t,l;
char s[100005];
int main(){
    freopen("escape.in","r",stdin);
    freopen("escape.out","w",stdout);
    scanf("%d",&t);
    while(t--){
        memset(s,0,sizeof(s));
        scanf("\n%s",s+1);
        l=strlen(s+1);
        for(int i=1;i<=l;i++){
            if(s[i]=='r')
                printf("%d ",i);
        }
        for(int i=l;i>=1;i--){
            if(s[i]=='l')
                printf("%d ",i);
        }
        puts("");
    }
    return 0;
}
