#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;
/*
* �������� 
    * k:�����Ϸ��� �ڸ���, lt:k�������� ���ʿ� �ִ� ��, rt:k�������� �����ʿ� �ִ� ��
* �ذ��� 
	* k�� �Ϻ��� �÷����鼭 lt,rt�� ���Ѵ�
    * k��° �ڸ����� ū�� ������ ������ �� ���� ����� ���Ѵ� 
*/
int main(){
	int n, k=1, lt=1, cur, rt, res=0; //k�� �ڸ��� 
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
