const process = require("process");
const readline = require("readline");

/**
 * A program that caclulates the numbeor of two neighboring stones of same
 * colour.
 */

function main() {
  const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
  });
  let n, stones;
  let count = 0;
  let lines = 2;
  rl.on("line", (line) => {
    if (n === 2) {
      n = Number(line.trim());
    } else {
      stones = line.trim();
      for (let i = 0; i < stones.length - 1; i++) {
        if (stones[i] === stones[i + 1]) {
          count++;
        }
      }
    }
    lines--;
    if (lines === 0) {
      console.log(count)
      rl.close();
    }
  });
}

main();
