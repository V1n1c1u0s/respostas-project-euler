/*The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?*/

let number = 600851475143;

for(let counter = 2; counter < number; counter++){
	if(number % counter == 0){
		number /= counter;
	}
}

console.log(`The largest prime factor is ${number}!`)