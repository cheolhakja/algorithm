#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
/*
�������� ������ ���� ����������
1. 2������ 3�� ���� 4������ ... �̷��� ��츦 ������ ���⵵�� �ణ ���̴� ��
2. -1, -2 �� �� ���� 2�� �������������� Ȯ���ϴ� ��� 
-> 1 2 �� �� �� ������ ���� 1�� ���ذ��鼭 ���ϴ� ���� �ֳ� ã�� ����� 
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
