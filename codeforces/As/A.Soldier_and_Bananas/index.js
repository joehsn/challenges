const process = require("process");
const readline = require("readline");

/**
 *
 */

function main() {
  const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
  });
  rl.on("line", (line) => {
    let [k, n, w] = line.trim().split(" ").map(Number);
    let res = 0;

    for (let i = 1; i <= w; i++) {
      res += (k * i);
    }


    if (n > res) {
      console.log(0);
    } else {
      console.log(res - n)
    }
    rl.close();
  });
}

main();
