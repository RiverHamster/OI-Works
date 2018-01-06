#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    freopen("elephant.in","r",stdin);
    freopen("elephant.out","w",stdout);
    int i,t,n,s1,s2,s3;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        s1=s2=s3=0;
        s1=n/10,n%=10;
        s2=n/5,n%=5;
        s3=n/1,n%=1;
        printf("%d\n",s1+s2+s3);
    }
    return 0;
}
