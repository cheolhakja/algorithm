#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
/*
* 해결방안
    * 주어진 값을 내림차순  정렬한다 
    * 정렬한 데이터를 두개씩 비교하면서 3번째로 큰 데이터를 찾는다 
*/
int main(){
	int n, min = 2147000000, index, i, j, tmp;
	scanf("%d", &n);
	vector<int> a(n), res;
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<n-1; i++){
		for(j=0; j<=n-i-1; j++){
		    if(a[j] < min) {
			    min = a[j];
			    index = j;
		    }
		}
		tmp = a[n-i-1];
		a[n-i-1] = min;
		a[index] = tmp;
		min=2147000000;
	}
	res.push_back(a[0]);
	for(i=0; i<n-1; i++){
		if(a[i] == a[i+1]){
			continue;
		}
		else{
			res.push_back(a[i+1]);
		}
	}
	printf("%d", res[2]);
}
