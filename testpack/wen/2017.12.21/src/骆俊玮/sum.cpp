#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    freopen("sum.in","r",stdin);
    freopen("sum.out","w",stdout);
    int i,n,t,x;
    long long sum,minn;
    scanf("%d",&t);
    while(t--){
        minn=2147483647,sum=0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
           scanf("%d",&x);
           if(x<minn) minn=x;
           sum+=x;
        }
        cout<<sum+minn<<endl;
    } 
    return 0;
}
