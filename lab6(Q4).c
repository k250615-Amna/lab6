#include <stdio.h>
int main(){
	int count;
	int sum=0;
	for(count=1;count<101; count++){
		sum = sum+count;
	}
	printf("The sum of one to hundred is: %d" , sum );
}
