#include <cstdio>
#include <iostream>
using namespace std;
typedef long long ll;
const int N=10005;
char a[N], b[N];
ll ta, tb;
int main(){
    freopen("multi.in","r",stdin);
    freopen("multi.out","w",stdout);
    int i;
    scanf("%s", a);
    scanf("%s", b);
    for (int i=0; a[i]!='\0'; i++) //代替strlen测试字符串长度函数 
        ta+=a[i]-'0';
    for (int i=0; b[i] ; i++) 
        tb+=b[i]-'0';
    cout<<ta*tb<<endl;
    return 0;
}
