#include <stdio.h>

/*A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 � 99.
Find the largest palindrome made from the product of two 3-digit numbers.*/

int reverse_digits(int product);

int main() {
	int number1 = 0, number2 = 0, product = 0, reverse_number = 0, result = 0;
	for(number1 = 100; number1 <= 999; number1++){
		for(number2 = 100; number2 <= 999; number2++){
			product = number1 * number2;
			reverse_number = reverse_digits(product);
    		if(product == reverse_number &&  result < product ){
        		result = product;
    		}
		}
	}
	printf("The largest palindrome made from the product of two 3-digit numbers is : %d",result);
	return 0;
}

int reverse_digits(int product){
	int reverse_number = 0;
	while(product){
		reverse_number = reverse_number*10 + (product % 10);
		product /= 10;
	}
	return reverse_number;
}