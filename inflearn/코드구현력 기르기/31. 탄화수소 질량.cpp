#include<stdio.h>
#include<vector>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;
/*
* ���� ����
    * 
* �ذ� ���
    * �ε���1���� H�� ���ö����� ���� ����ȭ�Ѵ�. H ���Ŀ� ���� ���ö����� ���� ����ȭ�Ѵ� 
    * char ���ڿ� �迭�� �������� null�� ���� 
*/
int  main(){	
    char a[10];
    scanf("%s", a);
    int i,indexH=0,res1=0, res2=0;
	if(a[1] == 'H'){
		res1 = 1;
		indexH=1;
	} 
    else{
    	for(i=1; a[i]!='H'; i++){
    		res1 = res1*10 +(a[i]-48);
		}
		indexH=i; //�̰� ����������� 
	}
	if(a[indexH+1] == '\0'){
		res2 = 1;
	} 
	else{
		for( i=indexH+1; a[i]!='\0'; i++){
		    res2 = res2*10 +(a[i]-48);
	    }
	}
	printf("%d", res1*12 + res2); 
} 


