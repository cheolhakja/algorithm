#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
/*
우리가 찾고자 하는 값은 왼쪽에 있다
그래서 정렬을 해야한다 
*/
int main() {
	int i,lp=0, rp, mid, n, key;
	scanf("%d %d", &n, &key);
	vector<int> a(n);
	for(i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	rp=n-1;
	sort(a.begin(), a.end());
	
	while(lp <= rp) { //찾을 자료 ( = key) 가 배열에 없는 경우 포인터가 엇갈리게 된다 
		mid = (lp + rp) /2;
		if(a[mid] == key) {
			printf("%d", mid+1);
			exit(0);
		}
		else if(a[mid] < key) {
		    //mid++; 
		    lp = mid + 1;
		    //왜 +1 이냐면 int형 변수에서 (3 + 4)/2 == 3 이니까 3도 서치의 대상이 되는거지 
		}
		else if(a[mid] > key) {
			//mid--;
			rp = mid - 1;
		}
	}
}
