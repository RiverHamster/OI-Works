#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int t,a,n;
long long s,minn;
int main(){
    freopen("sum.in","r",stdin);
    freopen("sum.out","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        s=0;minn=1000000;
        for(int i=1;i<=n;i++){
            scanf("%d",&a);
            s=s+(long long)a;
            if(a<minn)
                minn=(long long)a;
        }
        cout<<minn+s<<endl;
    }
    return 0;
}
