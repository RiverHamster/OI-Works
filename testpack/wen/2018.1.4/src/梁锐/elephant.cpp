//--�½��ݹ����ҷ�αˮӡ--
//--By�½��ݹ����� ����--
#include <ctime>
#include <cmath>
#include <cstdio>
#include <string>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>//ͷ�ļ�׼��
#define in freopen ("elephant.in","r",stdin)
#define out freopen ("elephant.out","w",stdout)
#define INF 2147483647
#define UNINF -2147483648ll
#define ch char
#define bo bool
#define ui unsigned int
#define ll long long//����Ϊ���ٴ򼸸��ַ���Ū�˺ö�ö�궨��
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
