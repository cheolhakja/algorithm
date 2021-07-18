#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*해결방법 
* for문을 0부터 n까지 돌면서 같은 수를 인덱스 i에서 찾으면
i-1부터 0이상일 동안 --하면서 한칸씩 뒤 인덱스로 민다.
* n까지 돌았는데도 같은 수가 없으면 0부터 i-2까지 한칸씩 뒤로 밀고 인덱스 0에 새로운
수 삽입 
*/
int main() {
	int n,m,i,a[1001];
	scanf("%d %d", &n, &m);
	vector<int> b(n);
	for(i=0; i<m; i++) {
		scanf("%d", &a[i]);
	}
}
