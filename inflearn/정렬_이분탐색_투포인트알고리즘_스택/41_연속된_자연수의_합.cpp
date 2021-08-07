#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
/*
순간적인 직관을 묻는 문제유형임
1. 2개연속 3개 연속 4개연속 ... 이렇게 경우를 나누고 복잡도를 약간 줄이는 법
2. -1, -2 를 한 다음 2로 나눠떨어지는지 확인하는 방법 
-> 1 2 이 두 수 각각에 점점 1씩 더해가면서 원하는 답이 있나 찾는 방식임 
*/
int main() {
	int n, cnt=0, i, j, k,seq=2, copy;
	scanf("%d", &n);
	copy = n-1;
	while(copy > 0) {
		copy -= seq;
		if(copy % seq == 0) {
			for(i = copy/seq + 1; i<copy/seq + 1+seq-1 ; i++) {
				printf("%d + ", i);
			}
			printf("%d = %d\n", copy/seq + 1+seq-1, n);
			cnt++;
		}
		seq++;
	}
	printf("%d", cnt);
}
