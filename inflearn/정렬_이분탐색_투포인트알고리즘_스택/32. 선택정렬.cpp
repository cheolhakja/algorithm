#include<stdio.h>
#include<vector>
#include<algorithm> 
using namespace std;
/*
* 변수 설명 
    * index : swap 을 위해 최솟값의 인덱스 저장하기
* 해결방안
    * 오름차순 : 범위를 줄여나가면서 범위 안의 최솟값을 찾은 뒤 
    그 최솟값을 맨 앞의 수와 swap한다 
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
