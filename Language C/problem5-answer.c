#include <stdio.h>
#include <stdbool.h>

/*2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?*/

int main(){
	int number = 2520, result = 0, counter = 0;
	bool verification;
	while(result == 0){
		verification = true;
		for(counter = 1;counter <= 20; counter++){
			if(number%counter != 0){
				verification = false;
				break;
			} 
		}
		if(verification){
			result = number;
		}
		number++;
	}
	printf("The smallest positive number that is evenly divisible by all of the numbers from 1 to 20 is: %d\n",result);
	return 0;
}