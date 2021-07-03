#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;
/*
* 변수설명 
    * k:조사하려는 자릿수, lt:k기준으로 왼쪽에 있는 값, rt:k기준으로 오른쪽에 있는 값
* 해결방안 
	* k를 일부터 늘려가면서 lt,rt를 구한다
    * k번째 자릿수가 큰지 같은지 작은지 세 경우로 나누어서 비교한다 
*/
int main(){
	int n, k=1, lt=1, cur, rt, res=0; //k는 자릿수 
	scanf("%d", &n);
	while(true){
		lt = n/(k*10); 
		rt = n%k;
		cur = (n/k) % 10;
		if(cur > 3){
			res = res + ((lt+1) * k);
		}
		else if( cur == 3){
		    res = res+ ((lt+1) * (rt+1));		
		}
		else if(cur < 3){
			res = res+(lt * k);
		}
		k=k*10;
		if( lt == 0) break;
	} 
	printf("%d", res);
}
