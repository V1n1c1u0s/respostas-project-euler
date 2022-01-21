/*2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?*/

let verification, number = 2520, result = 0

while(result == 0){
    verification = true;
    for(let counter = 1;counter <= 20; counter++){
        if(number % counter != 0){
            verification = false;
            break;
        } 
    }
    if(verification){
        result = number;
    }
    number++;
}

console.log(`The smallest positive number that is evenly divisible by all of the numbers from 1 to 20 is: ${result}`)