#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
/*
dvd의 길이가 될 수 있는 후보는 song의 재생시간의 max 부터 song의 재생시간 총합 사이임
이 후보들로 이분검색을 한다.

중요 : mid >= max
*/
int n, songs[1000], sum=0;

int count(int mid) {
	int i, cnt =1, sum=0; //일단 cnt를 1로 잡고 시작한다. 그래야 마지막에 else로 안끝나고 제대로 동작하게됨
	for (i = 0; i < n; i++)
	{
		if (sum + songs[i] <= mid) {
			sum += songs[i];
		}
		else {
			cnt++;
			sum = 0;
			sum += songs[i];
		}
	}
	return cnt;
}

int main() {
	int m, lp = 1, rp = 0, mid, i, res, max = -2147000000;
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &songs[i]);
		rp += songs[i];
		if (max < songs[i]) max = songs[i];
	}
	while (lp <= rp) {
		mid = (lp + rp) / 2;
		if (count(mid) <= m && mid >= max) {
			res = mid;
			rp = mid - 1; //rp == lp 인 다음에 rp = mid-1을 하거나 lp = mid +1을 하면 while을 벗어나겠네
		}
		else {
			lp = mid + 1;
		}
	}
	printf("%d", res);
}
