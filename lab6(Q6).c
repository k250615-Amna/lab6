#include <stdio.h>
int main(){
	int num,ans;
	int count = 2;
	int index = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	if(num==0 || num==1){
		index++;
	}
	else if(num==2){
		index = 0;
	}
	else{
		do{
		ans = num%count;
		if(ans == 0){
			index++;
			break;
		}
		count++;
	    }while(count < num);
	
    }
	if(index==0){
		printf("Its a prime number");
	}
	else{
		printf("Its not a prime number");
	}
		
	
	
}
