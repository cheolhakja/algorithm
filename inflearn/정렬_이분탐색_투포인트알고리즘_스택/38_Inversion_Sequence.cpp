#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
/*
* n�ε��� ���� --��Ų��
* ū ���� ������ŭ �������� �а� �����Ѵ�
* ū���� 0�� �̸� 0���� �������� �а� i�ε����� i�� �ִ´� 
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
		res[i+a[i]] = i; //��ĭ�� �������� �а� ���� �ڸ��� i�� ���� 
	}
	for (i = 1; i < n + 1; i++) {
		printf("%d ", res[i]);
	}
	return 0;
}
