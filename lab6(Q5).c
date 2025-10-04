#include <stdio.h>
int main(){
	int count;
	int product=1;
	printf("Enter a number you want to find the factorial of: ");
	scanf("%d", &count);
	for(count; count!=0; count--){
		product = product*count;
	}
	printf("factorial is: %d" , product);
}
