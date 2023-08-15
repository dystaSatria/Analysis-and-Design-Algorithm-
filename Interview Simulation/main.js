//With Magic code

for (let i = 0 ; i <= 100 ; i++){

    if (Number.isInteger(i/3)){
        console.log("Fizz");
    }

    if (Number.isInteger(i/5)){
        console.log("Buzz");
    }

    if (Number.isInteger(i/5) && Number.isInteger(i/3)){
        console.log("FizzBuzz");
    }

    else{
        console.log(i);
    }
}