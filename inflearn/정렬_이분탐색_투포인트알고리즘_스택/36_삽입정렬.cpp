#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
/*
* �ذ��� :
    * i�� �ε��� 1���� n-1���� tmp�� ���� �ִ´�
	* j�� i-1���� 0���� ���鼭 tmp���� Ŭ ��� ��ĭ �ڷ� �а�, tmp���� �۰ų� ���� ��� break�Ѵ�
	* break�� �� j+1�ε����� tmp�� �ִ´�
	* ū���� �ڷ� �а� �۰ų� ������ �ٷ� �ڿ� tmp�� �ִ� ��� 
*/
int main() {
	int n, a[101], i, j, tmp;
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	for(i=1; i<n; i++) { //tmp�� �ε����� �����ϴ� i 
	    tmp=a[i];
		for(j=i-1; j>=0; j--) {
		    if(a[j]>tmp) {
		    	a[j+1] = a[j];
			} 
			else {
				break;
			}
		}
		a[j+1] = tmp;
	}
	for(i=0; i<n; i++) {
		printf("%d ", a[i]);
	}
}
