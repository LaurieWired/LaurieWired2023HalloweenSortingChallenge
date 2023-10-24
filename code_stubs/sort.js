const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

function printArray(arr) {
    console.log("{");
    console.log(arr.join(" "));
    console.log("}");
}

function sortArray(arr) {
    // Your code goes here!

    printArray(arr);  // Make sure to call this print after every iteration
}

rl.question("Enter numbers separated by spaces: ", (input) => {
    const arr = input.split(" ").map(Number);

    printArray(arr);
    sortArray(arr);
    printArray(arr);

    rl.close();
});
