#include <stdio.h>

/*The sum of the squares of the first ten natural numbers is,
1� + 2� + ... + 10� = 385
The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)� = 55� = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is .
3025 - 385 = 2640
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.*/

int main(void){
	int sum_of_the_square = 0, square_of_the_sum = 0,difference = 0,counter;
	for(counter = 1; counter <= 100; counter++){
		sum_of_the_square += (counter*counter);
		square_of_the_sum += counter ;
	}
	square_of_the_sum *= square_of_the_sum;
	difference = square_of_the_sum - sum_of_the_square;
	printf("The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is: %d",difference);
	return 0;
}