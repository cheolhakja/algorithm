#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
/*
투포인터 알고리즘을 쓰려면 두 개의 배열이 반드시 정렬되어있어야한다.
두개를 비교하면서 한쪽이 크면 나머지 포인터를  ++ 시킨다 (나보다 큰수만
을테니까) 
*/
int main() {
	int n,m,i,j, p1=1, p2=1,p3=0;
	scanf("%d", &n);
	vector<int> a(n+1);
	for(i=1; i<=n; i++) {
	    scanf("%d", &a[i]);
	}
	scanf("%d", &m);
	vector<int> b(m+1), res(n+m);
	for(i=1; i<=m; i++) {
		scanf("%d", &b[i]);
	}
	sort(a.begin(), a.end()); 
	sort(b.begin(), b.end()); 
	
	while(p1<=n && p2<=m) {
		if(a[p1] == b[p2]) {
			res[p3++] = a[p1++];
			p2++;
		}
		else if(a[p1] < b[p2]) {
			p1++;
		} else {
			p2++;
		}
	}
	for(i=0; i<p3; i++) {
		printf("%d ", res[i]);
	}
}
