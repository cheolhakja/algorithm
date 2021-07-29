#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
/*
* n인덱스 부터 --시킨다
* 큰 수의 갯수만큼 왼쪽으로 밀고 삽입한다
* 큰수가 0개 이면 0개를 왼쪽으로 밀고 i인덱스에 i를 넣는다 
*/
int main() {
	int n, i, j;
	scanf("%d", &n);
	vector<int> a(n + 1);
	vector<int> res(n + 1);
	for (i = 1; i < n + 1; i++) {
		scanf("%d", &a[i]);
	}
	for (i = n; i >= 1; i--) {
		for (j = i+1; j < i+1+a[i]; j++) {
			res[j-1] = res[j];
		}
		res[i+a[i]] = i; //한칸씩 왼쪽으로 밀고 남은 자리에 i가 들어간다 
	}
	for (i = 1; i < n + 1; i++) {
		printf("%d ", res[i]);
	}
	return 0;
}
