//--新阶梯工作室防伪水印--
//--By新阶梯工作室 闪现--
#include <ctime>
#include <cmath>
#include <cstdio>
#include <string>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>//头文件准备
#define in freopen ("number.in","r",stdin)
#define out freopen ("number.out","w",stdout)
#define INF 2147483647
#define UNINF -2147483648ll
#define ch char
#define bo bool
#define ui unsigned int
#define ll long long//闪现为了少打几个字符，弄了好多好多宏定义
using namespace std;

int t,k,sum,ans,s[10];
ch c[100005];
inline void work();

int main(){
    in;out;
    work();
    return 0;
}

inline void work(){
    scanf ("%d",&t);
    while (t--){
        sum=ans=0;
        scanf ("%d\n",&k);
        cin>>c;
        memset(s,0,sizeof(s));
        int l=strlen(c);
        for (int i=0;i<l;i++){
            sum+=c[i]-'0';
            s[c[i]-'0']++;
        }
        if (sum<k){
            for (int i=0;sum<k;i++){
                while (s[i]--){
                    sum+=9-i;ans++;
                    if (sum>=k)break;
                }
            }
        }
        printf ("%d\n",ans);
    }
}
