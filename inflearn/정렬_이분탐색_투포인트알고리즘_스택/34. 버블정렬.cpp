#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
/*
* �ذ���
    * ������ �μ��� ���ؼ� ū ���� �ڷ� ������ 
*/
int main(){
	int n,i,j,tmp;
	scanf("%d", &n);
	int a[101];
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(i=n-1; i>=0; i--){
		for(j=0; j<i; j++){
			if(a[j]>a[j+1]) {
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
	    }
	}
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
}
