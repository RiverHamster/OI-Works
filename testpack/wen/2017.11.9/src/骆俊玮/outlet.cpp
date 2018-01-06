#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    freopen("outlet.in","r",stdin);
    freopen("outlet.out","w",stdout);
    int n,k,s,a,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        s=0;
        scanf("%d",&k);
        for(j=0;j<k;j++){
            scanf("%d",&a);
            s+=a;
        }
        printf("%d\n",s-k+1);
    }
    return 0;
}
