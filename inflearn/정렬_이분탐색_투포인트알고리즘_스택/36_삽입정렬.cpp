#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
/*
* 해결방법 :
    * i는 인덱스 1부터 n-1까지 tmp에 값을 넣는다
	* j는 i-1부터 0까지 돌면서 tmp보다 클 경우 한칸 뒤로 밀고, tmp보다 작거나 같을 경우 break한다
	* break한 뒤 j+1인덱스에 tmp를 넣는다
	* 큰값은 뒤로 밀고 작거나 같은값 바로 뒤에 tmp를 넣는 방식 
*/
int main() {
	int n, a[101], i, j, tmp;
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	for(i=1; i<n; i++) { //tmp의 인덱스를 지정하는 i 
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
