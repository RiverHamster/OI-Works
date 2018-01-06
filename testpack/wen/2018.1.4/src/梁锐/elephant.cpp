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
#define in freopen ("elephant.in","r",stdin)
#define out freopen ("elephant.out","w",stdout)
#define INF 2147483647
#define UNINF -2147483648ll
#define ch char
#define bo bool
#define ui unsigned int
#define ll long long//闪现为了少打几个字符，弄了好多好多宏定义
using namespace std;

int n,t,ans;
inline void work();

int main(){
    in;out;
    work();
    return 0;
}

inline void work(){
    scanf ("%d",&t);
    while (t--){
        ans=0;
        scanf ("%d",&n);
        ans+=n/10;n%=10;
        ans+=n/5;n%=5;
        printf ("%d\n",ans+n);
    }
}
