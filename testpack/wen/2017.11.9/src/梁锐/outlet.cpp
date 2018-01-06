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

int n,t,a,ans;
inline void work();

int main(){
    freopen ("outlet.in","r",stdin);
    freopen ("outlet.out","w",stdout);
    work();
}

inline void work(){
    scanf ("%d",&t);
    while (t--){
        ans=0;
        scanf ("%d",&n);
        while (n--){
            scanf ("%d",&a);
            ans+=a-1;
        }
        printf ("%d\n",ans+1);
    }
}
