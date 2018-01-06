#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<fstream>
using namespace std;
ifstream in("outlet.in");
ofstream out("outlet.out");
void read(int &a);
int main(){
    int t,n,sum,a,i;
    read(t);
    while(t--){
        read(n);
        sum=-n+1;
        for(i=1;i<=n;i++){
            read(a);
            sum+=a;
        }
        out<<sum<<endl;
    }
    in.close();
    out.close();
    return 0;
}
void read(int &a){
    int k=0;
    bool flag=0;
    char s;
    while(1){
        s=in.get();
        if(s=='-'){
            flag=1;
        }
        if(s>='0'&&s<='9'){
            k=s-'0';
            break;
        }
    }
    while(1){
        s=in.get();
        if(s<'0'||s>'9'){
            break;
        }
        k=(k<<1)+(k<<3)+s-'0';
    }
    if(flag){
        a=-k;
    }else{
        a=k;
    }
}
