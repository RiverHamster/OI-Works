#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char a[100005];
int b[100005];
int main()
{
    freopen("number.in","r",stdin);
    freopen("number.out","w",stdout);
    int i,n,t,k,s;
    scanf("%d",&k);
    while(t--){
        s=0;
        scanf("%d",&k);
        scanf("%s",a);
        n=strlen(a);
        for(i=0;i<n;i++){
            b[i]=a[i]-'0';
            s+=b[i];
        }
        sort(b,b+n);
        if(s>=k) printf("0\n");
        else{
             for(i=0;i<n;i++){
                 if(s>=k) break;
                 s+=9-b[i];
             }
             printf("%d\n",i);
        }
    }
    return 0;
}
