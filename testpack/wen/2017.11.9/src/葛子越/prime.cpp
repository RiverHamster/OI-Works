#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<fstream>
using namespace std;
ifstream in("prime.in");
ofstream out("prime.out");
int prime[10005],sum[10005],m;
bool t[10005];
void read(int &a);
void p();
int main(){
    int t,n,i,j,ans,k;
    p();
    read(t);
    while(t--){
        read(n);
        ans=0;
        for(i=1,j=1;j<=m;){
            k=sum[j]-sum[i-1];
            if(k==n){
                ans++;
                i++;
            }else{
                if(k<n){
                    j++;
                }else{
                    i++;
                }
            }
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
void p(){
    int i,j;
    for(i=2;i<=10000;i++){
        if(t[i]==0){
            prime[++m]=i;
            sum[m]=sum[m-1]+i;
            for(j=2*i;j<=10000;j+=i){
                t[j]=1;
            }
        }
    }
    return;
}
