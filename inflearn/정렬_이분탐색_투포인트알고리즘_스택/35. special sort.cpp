#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
/* 
* 해결:
    * 버블소트
	* 한차례 정렬이 끝나면 맨 오른쪽엔 양수가 감 -> 맨 오른쪽 제외하고 다시 소트
	* 순서 보장해야됨 그래서 두개씩 비교해야 
*/
int main() {
	int n, a[101], i, j, tmp;
	vector<int> minus, plus;
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	for(i=0; i<n-1; i++) {
		for(j=0; j<n-i-1; j++) {
			if(a[j]>0 && a[j+1]<0) {
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
	for(i=0; i<n; i++) {
		printf("%d ", a[i]);
	}
}
