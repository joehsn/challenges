const process = require("process");
const readline = require("readline");

/**
 * A program that retuns the result of the decreasing `n` by one `k` times.
 */

function main() {
  const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
  });

  rl.on("line", (line) => {
    let [n, k] = line.trim().split(" ").map(Number);

    for (let i = 0; i < k; i++) {
      if (n % 10 === 0)
        n = Math.floor(n / 10);
      else
        n--;
    }

    console.log(n)
    rl.close();
  });
}

main();
