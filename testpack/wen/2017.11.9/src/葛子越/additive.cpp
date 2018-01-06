#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<fstream>
using namespace std;
ifstream in("additive.in");
ofstream out("additive.out");
int dp[1005],a[35];
void read(int &a);
int main(){
    int t,n,m,ans,i,j;
    read(t);
    while(t--){
        ans=0;
        memset(dp,0,sizeof(dp));
        read(n);
        m=0;
        for(i=1;i<=n;i++){
            read(a[i]);
            m=max(m,a[i]);
        }
        dp[0]=1;
        for(i=1;i<=n;i++){
            for(j=m;j>=a[i];j--){
                dp[j]+=dp[j-a[i]];
            }
        }
        for(i=1;i<=n;i++){
            ans+=dp[a[i]]-1;
        }
        out<<ans<<endl;
    }
    in.close();
    out.close();
    return 0;
}
void read(int &a){
    int k=0;
    bool flag=0;
    char s;
    while(1){
        s=in.get();
        if(s=='-'){
            flag=1;
        }
        if(s>='0'&&s<='9'){
            k=s-'0';
            break;
        }
    }
    while(1){
        s=in.get();
        if(s<'0'||s>'9'){
            break;
        }
        k=(k<<1)+(k<<3)+s-'0';
    }
    if(flag){
        a=-k;
    }else{
        a=k;
    }
}
