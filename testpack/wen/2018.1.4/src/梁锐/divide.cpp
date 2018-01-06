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
#define in freopen ("divide.in","r",stdin)
#define out freopen ("divide.out","w",stdout)
#define INF 2147483647
#define UNINF -2147483648ll
#define ch char
#define bo bool
#define ui unsigned int
#define ll long long//闪现为了少打几个字符，弄了好多好多宏定义
using namespace std;

int n,t,sum,a[55],f[50005];
inline void work();

int main(){
    in;out;
    work();
    return 0;
}

inline void work(){
    scanf ("%d",&t);
    while (t--){
        sum=0;
        scanf ("%d",&n);
        memset(f,0,sizeof(f));
        for (int i=1;i<=n;i++){
            scanf ("%d",&a[i]);
            sum+=a[i];
        }
        for (int i=1;i<=n;i++){
            for (int j=sum/2;j>=a[i];j--){
                f[j]=max(f[j],f[j-a[i]]+a[i]);
            }
        }
        printf ("%d\n",sum-2*f[sum/2]);
    }
}
