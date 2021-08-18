#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
/*
재귀함수가 무엇인지
*/
void recur(int n) {
	if(n==0) {
		return;//그냥 return만 있으면 함수를 종료한다는 의미이다
		//재귀함수 탈출조건 == 내가 원하는 종료지점에 도달했다 
		//컴퓨터 내부적으로 함수를 호출했을떄 쓰는 메모리가 `스택`인가보다 
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
