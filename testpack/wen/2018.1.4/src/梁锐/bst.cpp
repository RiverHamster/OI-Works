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
#define in freopen ("bst.in","r",stdin)
#define out freopen ("bst.out","w",stdout)
#define INF 2147483647
#define UNINF -2147483648ll
#define ch char
#define bo bool
#define ui unsigned int
#define ll long long//����Ϊ���ٴ򼸸��ַ���Ū�˺ö�ö�궨��
using namespace std;

int t;
ll n;
inline void work();

int main(){
    in;out;
    work();
    return 0;
}

inline void work(){
    scanf ("%d",&t);
    while (t--){
        scanf ("%lld",&n);
        printf ("%lld %lld\n",(n&(n-1))+1,n|(n-1));
    }
}
