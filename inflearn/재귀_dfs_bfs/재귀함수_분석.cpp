#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
/*
����Լ��� ��������
*/
void recur(int n) {
	if(n==0) {
		return;//�׳� return�� ������ �Լ��� �����Ѵٴ� �ǹ��̴�
		//����Լ� Ż������ == ���� ���ϴ� ���������� �����ߴ� 
		//��ǻ�� ���������� �Լ��� ȣ�������� ���� �޸𸮰� `����`�ΰ����� 
	} 
	else{
		recur(n-1);
		printf("%d ", n);
	}
}

int main() {
	int n,i;
	scanf("%d", &n);
	recur(n);
}
