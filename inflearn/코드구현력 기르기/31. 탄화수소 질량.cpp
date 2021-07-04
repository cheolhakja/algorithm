#include<stdio.h>
#include<vector>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;
/*
* 변수 설명
    * 
* 해결 방안
    * 인덱스1부터 H가 나올때까지 수를 숫자화한다. H 이후에 널이 나올때까지 수를 숫자화한다 
    * char 문자열 배열의 나머지는 null이 들어간다 
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
		indexH=i; //이거 까먹을뻔했음 
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


