#include <ctime>
#include <cmath>
#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>
#define in freopen ("escape.in","r",stdin)
#define out freopen ("escape.out","w",stdout)
#define INF 2147483647
#define UNINF -2147483648ll
#define ch char
#define bo bool
#define ui unsigned int
#define ll long long
using namespace std;
char s[100005];
int t,ans[100005];
inline void work();
int main(){
    in;out;
    work();
}
inline void work(){
    scanf ("%d",&t);
    while (t--){
        cin>>s;
        int i=0,j=strlen(s)-1,k=0,l=strlen(s)-1;
        while (k<=l){
            if (s[k]=='l'){
                ans[j--]=k+1;
            }
            else{
                ans[i++]=k+1;
            }
            k++;
        }
        for (i=0;i<=l;i++){
            printf ("%d ",ans[i]);
        }
        printf ("\n");
    }
}
