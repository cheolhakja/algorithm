#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
/*
�츮�� ã���� �ϴ� ���� ���ʿ� �ִ�
�׷��� ������ �ؾ��Ѵ� 
*/
int main() {
	int i,lp=0, rp, mid, n, key;
	scanf("%d %d", &n, &key);
	vector<int> a(n);
	for(i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	rp=n-1;
	sort(a.begin(), a.end());
	
	while(lp <= rp) { //ã�� �ڷ� ( = key) �� �迭�� ���� ��� �����Ͱ� �������� �ȴ� 
		mid = (lp + rp) /2;
		if(a[mid] == key) {
			printf("%d", mid+1);
			exit(0);
		}
		else if(a[mid] < key) {
		    //mid++; 
		    lp = mid + 1;
		    //�� +1 �̳ĸ� int�� �������� (3 + 4)/2 == 3 �̴ϱ� 3�� ��ġ�� ����� �Ǵ°��� 
		}
		else if(a[mid] > key) {
			//mid--;
			rp = mid - 1;
		}
	}
}
