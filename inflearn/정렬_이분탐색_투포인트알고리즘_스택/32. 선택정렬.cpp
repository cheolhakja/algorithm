#include<stdio.h>
#include<vector>
#include<algorithm> 
using namespace std;
/*
* ���� ���� 
    * index : swap �� ���� �ּڰ��� �ε��� �����ϱ�
* �ذ���
    * �������� : ������ �ٿ������鼭 ���� ���� �ּڰ��� ã�� �� 
    �� �ּڰ��� �� ���� ���� swap�Ѵ� 
*/
int main(){
	int n, min = 2147000000, index;
	scanf("%d", &n);
	vector<int> a(n);
	for(int i=0; i<n; i++){
		int tmp;
		scanf("%d", &tmp);
		a[i]=tmp;
	}
	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
		    if(a[j] < min) {
		        min = a[j];
		        index = j;
			}
	    }
	    printf("%d ", min);
	    int tmp = a[i];
		a[i] = min;
		a[index] = tmp;
	    min = 2147000000;
	}
}
