#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char a[100005];
int s[100005];
int main()
{
    freopen("escape.in","r",stdin);
    freopen("escape.out","w",stdout);
    int i,j,n,l,sum,left,right;
    scanf("%d",&n);
    while(n--){
        memset(s,0,sizeof(s));
        scanf("%s\n",a);
        l=strlen(a),sum=1,left=0,right=l-1;
        for(i=0;i<l;i++){
            if(a[i]=='l') s[right--]=sum++;
            if(a[i]=='r') s[left++]=sum++;
        }
        for(i=0;i<l;i++) printf("%d ",s[i]);
        printf("\n");
    }
    return 0;
}
