#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
/*
a�迭�� i�ε��� ���� b�迭�� i�ε��� ���� ���Ѵ� 
*/
int main() {
	int n,m,a[101],b[101],i,j,k ;
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d ", &m);
	for(i=0; i<m; i++) {
		scanf("%d", &b[i]);
	}
	vector<int> res;
	i =0;
	j=0;
	while(i<n && j<m) {
		if(a[i] > b[j]) {
			res.push_back(b[j]);
			j++;
		}
		else {
			res.push_back(a[i]);
			i++;
		}
	}
	while(i<n) {
		res.push_back(a[i++]);
	}
	while(j<m) {
		res.push_back(b[j++]);
	}
	for(i=0; i<m+n; i++) {
		printf("%d ", res[i]);
	}
}
