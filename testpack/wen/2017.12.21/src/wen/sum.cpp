#include <cstdio>
inline int mn(int a, int b){
	return a>b ? b : a;
}
void in(int &s){
	char c=getchar();
	while (c<'0' || c>'9') c=getchar();
	for (s=0; c>='0' && c<='9'; c=getchar())
		s=s*10+c-'0';
}
int main(){
	freopen("sum.in", "r", stdin);
	freopen("sum.out", "w", stdout);
	int t, n;
	scanf("%d", &t);
	while (t--){
		scanf("%d", &n);
		int x, m=1<<30;
		unsigned sum=0;
		while (n--){
			in(x); //scanf("%d", &x);
			sum+=x;
			m=mn(x, m);
		}
		printf("%u\n", sum+m);
	}
	return 0;
}
