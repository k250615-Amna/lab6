#include <stdio.h>
/* sequence from F(0) to F(9)*/
int main(){
	int t1=0;
	int t2=1;
	int nterm,i;
	printf("Fibonacci sequence:\n");
	for(i=1;i<11;i++){
		printf("%d\n" , t1);
		nterm = t1 + t2;
		t1=t2;
		t2=nterm;
	}
	return 0;	
}
