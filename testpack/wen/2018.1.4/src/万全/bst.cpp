#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iomanip>//fixed<<
//#include<bits/stdc++.h>
using namespace std;
int t,x;
bool check(int x){
	while(x){
		if(x%2==1&&x!=1)return 1;x/=2;
	}
	return 0;
}
int main(){
	freopen("bst.in","r",stdin);
	freopen("bst.out","w",stdout);
	scanf("%d",&t);
	while(t--){
		scanf("%d",&x);
		if(check(x)){
			printf("%d %d\n",(x&(x-1))+1,x|(x-1));
		}
		else printf("%d %d\n",1,2*x-1);
	}
	return 0;
}

