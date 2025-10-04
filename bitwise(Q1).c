#include <stdio.h>
int main(){
	int num1,num2,equal;
	printf("Enter number 1: ");
	scanf("%d", &num1);
	printf("Enter number 2: ");
	scanf("%d", &num2);
	
	equal = num1&num2;
	if(equal==0){
		printf("no common bits");
	}
	else{
		printf("Decimal equvilant of common bits is: %d", equal);
	}
}
