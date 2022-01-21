#include <stdio.h>

/*The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?*/

int main(){
	unsigned long long number = 600851475143ULL;
	unsigned long long counter;
	for(counter = 2ULL; counter < number; counter++){
		if(number % counter == 0){
			number /= counter;
		}
	}
	printf("The largest prime factor is %llu !\n",number);
	return 0;
}