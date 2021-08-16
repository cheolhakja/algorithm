#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
/*
dvd�� ���̰� �� �� �ִ� �ĺ��� song�� ����ð��� max ���� song�� ����ð� ���� ������
�� �ĺ���� �̺а˻��� �Ѵ�.

�߿� : mid >= max
*/
int n, songs[1000], sum=0;

int count(int mid) {
	int i, cnt =1, sum=0; //�ϴ� cnt�� 1�� ��� �����Ѵ�. �׷��� �������� else�� �ȳ����� ����� �����ϰԵ�
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
			rp = mid - 1; //rp == lp �� ������ rp = mid-1�� �ϰų� lp = mid +1�� �ϸ� while�� ����ڳ�
		}
		else {
			lp = mid + 1;
		}
	}
	printf("%d", res);
}
