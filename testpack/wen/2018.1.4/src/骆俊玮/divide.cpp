#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int a[55];
int main()
{
    freopen("divide.in","r",stdin);
    freopen("divide.out","w",stdout);
    int i,t,n,s1,s2,s;
    scanf("%d",&t);
    while(t--){
        s=s1=s2=0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            s+=a[i];
        }
        sort(a,a+n);
        for(i=0;i<n/4;i++) s1=s1+a[i]+a[n-1-i];
        s2=s-s1;
        printf("%d\n",abs(s1-s2));
    }
    return 0;
}
