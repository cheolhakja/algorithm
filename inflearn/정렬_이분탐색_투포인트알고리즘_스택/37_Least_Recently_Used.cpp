#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*해결방법 
* for문을 0부터 n-1까지 돌면서 같은 수를 인덱스 i에서 찾으면
i-1부터 0이상일 동안 --하면서 한칸씩 뒤 인덱스로 민다.
* n까지 돌았는데도 같은 수가 없으면 n-2부터 0까지 한칸씩 뒤로 밀고 인덱스 0에 새로운
수 삽입 
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
