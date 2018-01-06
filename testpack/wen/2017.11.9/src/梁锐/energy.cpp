#include <cmath>
#include <ctime>
#include <cstdio>
#include <string>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int n,t;
ll ans1,ans2;
inline void work();

int main(){
    freopen ("energy.in","r",stdin);
    freopen ("energy.out","w",stdout);
    work();
}

inline void work(){
    scanf ("%d",&t);
    while (t--){
        scanf ("%d",&n);
        ans1=n*1ll*n;
        ans2=3ll*(n*(n+1))/2;
        cout<<ans1<<' '<<ans2<<endl;
    }
}
