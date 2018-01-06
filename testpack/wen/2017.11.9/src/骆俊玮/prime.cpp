#include<iostream>
#include<cstdio>
using namespace std;
int a[5005];
int zs(int n){
    for(int i=2;i*i<=n;i++)
        if(n%i==0) return 0;
    return 1;
}
int main()
{
    freopen("prime.in","r",stdin);
    freopen("prime.out","w",stdout);
    int i,j,k,n,m,s=0,num,p;
    for(i=2;i<=10000;i++)
        if(zs(i)==1) a[s++]=i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        num=0;
        scanf("%d",&m);
        for(j=0;j<s;j++){
            if(a[j]>m) break;
            p=0;
            for(k=j;p<=m;k++){
                p+=a[k];
                if(p==m){
                    num++;
                    break;
                }
            }
        }
        printf("%d\n",num);
    }
    return 0;
}
