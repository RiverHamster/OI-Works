#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int a[35],b[35]; 
int main()
{
    freopen("bst.in","r",stdin);
    freopen("bst.out","w",stdout);
    int i,j,t,n,k,s1,s2;
    scanf("%d",&t);
    while(t--){
        i=s1=s2=0;
        scanf("%d",&n);
        while(n){
            a[i++]=n%2;
            b[i-1]=a[i-1];
            n/=2;
        }
        k=i;
        for(i=0;i<k;i++){
            if(a[i]==1){
                a[i]=0;
                a[0]=1;
                break;
            }
        }
        for(i=0;i<k;i++){
            if(b[i]==1){
                for(j=i-1;j>=0;j--) b[j]=1;
                break;
            }
        }
        for(i=0,j=1;i<k;i++,j*=2){
            s1+=a[i]*j;
            s2+=b[i]*j;
        }
        printf("%d %d\n",s1,s2);
    }
    return 0;
}
