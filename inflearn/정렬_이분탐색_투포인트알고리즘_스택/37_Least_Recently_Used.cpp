#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*�ذ��� 
* for���� 0���� n-1���� ���鼭 ���� ���� �ε��� i���� ã����
i-1���� 0�̻��� ���� --�ϸ鼭 ��ĭ�� �� �ε����� �δ�.
* n���� ���Ҵµ��� ���� ���� ������ n-2���� 0���� ��ĭ�� �ڷ� �а� �ε��� 0�� ���ο�
�� ���� 
*/
int main() {
	int n,m,i,j,k,a[1001], index=-1;
	scanf("%d %d", &n, &m);
	vector<int> b(n);
	for(i=0; i<m; i++) {
		scanf("%d", &a[i]);
	}
	for(i=0; i<m; i++) {
		for(j=0; j<n; j++) {
		    if(a[i] == b[j]) {
		    	index = j;
			}
	    }   
	    if(index != -1) {
			for(k=index-1; k>=0; k--) {
				b[k+1] = b[k];
			}
		} else {
			for(k=n-2; k>=0; k--) {
				b[k+1] = b[k];
			}
		}
		b[0] = a[i];
		index=-1;
	}
	for(i=0; i<n; i++) {
		printf("%d ", b[i]);
	}
}
