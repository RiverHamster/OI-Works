#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std;
#define NextInt(a) scanf("%d",&a)
#define NextChar(a) scanf("%c",&a)
#define NextString(a) cin>>a
#define PrintInt(a) printf("%d",a)
#define PrintspInt(a) printf("%d ",a)
#define PrintlnInt(a) printf("%d\n",a)
bool prime[10005];
int sum[1005];
bool num[1005];
int n,m,k,len;
bool answer;
void check();
void DFS(int s);
int main(){
    freopen("aprime.in","r",stdin);
    freopen("aprime.out","w",stdout);
    int t;
    NextInt(t);
    check();
    while(t--){
        NextInt(n);
        NextInt(m);
        NextInt(k);
        len=m-n+1;
        answer=1;
        DFS(1);
        if(answer==1){
            printf("None\n");
        }
    }
    return 0;
}
void check(){
    int i,j,n=10000;
    for(i=2;i<=n;i++){
        if(prime[i]==0){
            for(j=i*2;j<=n;j+=i){
                prime[j]=1;
            }
        }   
    }
}
void DFS(int s){
    if(answer==0){
        return;
    }
    int i,j;
    bool flag;
    if(s==len+1){
        for(i=1;i<=len;i++){
            PrintspInt(sum[i]-sum[i-1]);
        }
        printf("\n");
        answer=0;
        return;
    }
    for(i=n;i<=m;i++){
        if(num[i]==0){
            flag=1;
            for(j=i-1;j>=1&&j>=(i-k+1);j--){
                if(prime[sum[s-1]+i-sum[j-1]]==1){
                    sum[s]=sum[s-1]+i;
                    num[i]=1;
                    DFS(s+1);
                    num[i]=0;
                }
            }
        }
    }
    return;
}
