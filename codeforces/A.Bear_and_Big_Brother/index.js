const process = require("process");
const readline = require("readline");

/**
 * A program that prints one integer, denoting the integer number of years after
 * which Limak will become strictly larger than Bob.
 */

function main() {
  const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
  });
  rl.on("line", (line) => {
    let [limak, bob] = line.trim().split(" ").map(Number);
    let count = 0;
    while (limak <= bob) {
      limak *= 3;
      bob *= 2;
      count++;
    }
    console.log(count);
    rl.close();
  });
}

main();
