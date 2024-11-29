const process = require("process");
const readline = require("readline");

/**
 * A program that prints the minimum number of steps that elephant needs to make
 * to get from point 0 to point x.
 */
function main() {
  const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
  });
  rl.on("line", (line) => {
    const x = Number(line.trim());
    console.log(Math.ceil(x / 5));
    rl.close();
  });
}

main();
