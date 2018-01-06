#include <cstdio>
const int N=205;
int v[12][N][N], num[12][N][N];
int main(){
	freopen("star.in", "r", stdin);
	freopen("star.out", "w", stdout);
	int n, q, c;
	scanf("%d %d %d", &n, &q, &c); c++;
	for (int i=0; i<n; i++){
		int x, y, s;
		scanf("%d %d %d", &x, &y, &s);
		v[s][x][y]++;
	} 
	for (int l=0; l<c; l++)
		for (int x=1; x<=100; x++)
			for (int y=1; y<=100; y++)
				num[l][x][y]=num[l][x-1][y]+num[l][x][y-1]-num[l][x-1][y-1]+v[l][x][y];
	while (q--){
		int t, x1, y1, x2, y2;
		scanf("%d %d %d %d %d", &t, &x1, &y1, &x2, &y2);
		int cnt=0;
		for (int l=0; l<c; l++)
			cnt+=(num[l][x2][y2]-num[l][x1-1][y2]-num[l][x2][y1-1]+num[l][x1-1][y1-1])*((l+t)%c);
		printf("%d\n", cnt);
	}
	return 0;
}
/*
二维数组前缀和的应用 
*/
